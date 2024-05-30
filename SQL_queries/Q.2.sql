-- Step 1: Create the Employee table
use keyur_jain_22;
CREATE TABLE Emplyee (
    emplyee_id INT PRIMARY KEY,
    name VARCHAR(50),
    city VARCHAR(50),
    salary DECIMAL(10, 2),
    department VARCHAR(50)
);
drop table Emplyee
-- Step 2: Create the Incentive table
CREATE TABLE Incentive (
    incentive_id INT PRIMARY KEY,
    emplyee_id INT,
    incentive_date DATE,
    amount DECIMAL(10, 2),
    FOREIGN KEY (emplyee_id) REFERENCES Emplyee(emplyee_id)
);
drop table Incentive
-- Step 3: Insert sample data into Employee table
INSERT INTO Emplyee (emplyee_id, name, city, salary, department) VALUES
(1, 'John Doe', 'New York', 60000, 'Sales'),
(2, 'Jane Smith', 'Los Angeles', 65000, 'Marketing'),
(3, 'Sam Brown', 'Chicago', 55000, 'HR'),
(4, 'Linda Green', 'Houston', 70000, 'IT');

-- Step 4: Insert sample data into Incentive table
INSERT INTO Incentive (incentive_id, emplyee_id, incentive_date, amount) VALUES
(1, 1, '2024-01-15', 500),
(2, 2, '2024-02-20', 1000),
(3, 1, '2024-03-10', 750),
(4, 3, '2024-04-05', 300);

-- Step 5: Query to display relevant data
SELECT 
    e.emplyee_id, 
    e.name, 
    e.city, 
    e.salary, 
    e.department, 
    i.incentive_date, 
    i.amount
FROM 
    Emplyee e
LEFT JOIN 
    Incentive i ON e.emplyee_id = i.emplyee_id;
