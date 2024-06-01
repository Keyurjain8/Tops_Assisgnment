USE S_J_1;

-- Drop tables if they exist
DROP TABLE IF EXISTS Loan;
DROP TABLE IF EXISTS AccountHolder;
DROP TABLE IF EXISTS Bank;

-- Create Bank table
CREATE TABLE Bank (
    branch_id INT PRIMARY KEY,
    branch_name VARCHAR(255),
    branch_city VARCHAR(255)
);

-- Create AccountHolder table
CREATE TABLE AccountHolder (
    account_holder_id INT PRIMARY KEY,
    account_no INT UNIQUE,
    account_holder_name VARCHAR(255),
    city VARCHAR(255),
    contact VARCHAR(255),
    date_of_account_created DATE,
    account_status VARCHAR(50),
    account_type VARCHAR(50),
    balance DECIMAL(10, 2)
);

-- Create Loan table
CREATE TABLE Loan (
    loan_no INT PRIMARY KEY,
    branch_id INT,
    account_holder_id INT,
    loan_amount DECIMAL(10, 2),
    loan_type VARCHAR(255),
    FOREIGN KEY (branch_id) REFERENCES Bank(branch_id),
    FOREIGN KEY (account_holder_id) REFERENCES AccountHolder(account_holder_id)
);
-- Insert data into Bank table
INSERT INTO Bank (branch_id, branch_name, branch_city)
VALUES
(1, 'Central', 'New York'),
(2, 'West End', 'Los Angeles'),
(3, 'Downtown', 'Chicago');

-- Insert data into AccountHolder table
INSERT INTO AccountHolder (account_holder_id, account_no, account_holder_name, city, contact, date_of_account_created, account_status, account_type, balance)
VALUES
(1, 101, 'John Doe', 'New York', '123-456-7890', '2024-05-10', 'active', 'savings', 500.00),
(2, 102, 'Jane Smith', 'New York', '987-654-3210', '2024-05-20', 'active', 'checking', 300.00),
(3, 103, 'Robert Brown', 'Los Angeles', '555-666-7777', '2024-05-18', 'terminated', 'savings', 200.00);

-- Insert data into Loan table
INSERT INTO Loan (loan_no, branch_id, account_holder_id, loan_amount, loan_type)
VALUES
(1, 1, 1, 10000.00, 'home'),
(2, 2, 3, 5000.00, 'auto');

START TRANSACTION;

-- Deduct $100 from account 101
UPDATE AccountHolder
SET balance = balance - 100
WHERE account_no = 101;

-- Add $100 to account 102
UPDATE AccountHolder
SET balance = balance + 100
WHERE account_no = 102;

COMMIT;
SELECT *
FROM AccountHolder A1
WHERE EXISTS (
    SELECT 1
    FROM AccountHolder A2
    WHERE A1.city = A2.city
    AND A1.account_holder_id <> A2.account_holder_id
);
SELECT account_no, account_holder_name
FROM AccountHolder
WHERE DAY(date_of_account_created) > 15;

SELECT branch_city, COUNT(branch_id) AS Count_Branch
FROM Bank
GROUP BY branch_city;

SELECT AH.account_holder_id, AH.account_holder_name, L.branch_id, L.loan_amount
FROM AccountHolder AH
JOIN Loan L ON AH.account_holder_id = L.account_holder_id;


