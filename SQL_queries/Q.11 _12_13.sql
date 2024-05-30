use S_J_1;
CREATE TABLE Salesperson (
    SNo INT PRIMARY KEY,
    SName VARCHAR(50),
    City VARCHAR(50),
    Comm DECIMAL(5, 2)
);
INSERT INTO Salesperson (SNo, SName, City, Comm) VALUES
(1001, 'Peel', 'London', 12),
(1002, 'Serres', 'San Jose', 13),
(1004, 'Motika', 'London', 11),
(1007, 'Rafkin', 'Barcelona', NULL),
(1003, 'Axelrod', 'New York', 15);
drop table Salesperson;
CREATE TABLE Customer (
    CNM INT PRIMARY KEY,
    CName VARCHAR(50),
    City VARCHAR(50),
    Rating INT,
    SNo INT,
    FOREIGN KEY (SNo) REFERENCES Salesperson(SNo)
);
INSERT INTO Customer (CNM, CName, City, Rating, SNo) VALUES
(100, 'Hoffman', 'London', 100, 1001),
(201, 'Giovanne', 'Roe', 200, 1003),
(202, 'Liu', 'San Jose', 300, 1002),
(203, 'Grass', 'Barcelona', 10000, 1002),
(204, 'Clemens', 'London', 300, 1007),
(206, 'Pereira', 'Roe', 100, 1004);
 drop table Customer;
SELECT * FROM Salesperson;
SELECT * FROM Customer;
SELECT *
FROM Salesperson
JOIN Customer ON Salesperson.SNo = Customer.SNo;

SELECT * FROM Customer 
WHERE Rating > 1000;


