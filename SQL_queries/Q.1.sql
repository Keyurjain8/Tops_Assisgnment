create database keyur;

use keyur;
-- Student table
CREATE TABLE Student (
    Rollno INT PRIMARY KEY,
    first_name VARCHAR(50),
    Branch VARCHAR(255)
    );
   insert into Student  values
(1,"jay","Computer Science"),
(2 ,"Suhani","Electronic and Com"),
(3,"Kriti","Electronic and com");
drop table student ;

-- Exam table
 CREATE TABLE Exam (
   Rollno INT ,
    S_code VARCHAR(100),
    Marks INT,
    p_code VARCHAR(100)
    );

    insert into Exam  values
(1 ,"CS11",50,"CS"),
(1 ,"CS12",60, "CS"),
(2 ,"EC101",60, "EC"),
(2 ,"EC102",70,"EC"),
(3 ,"EC101",45,"EC"),
(3 ,"EC102",50,"EC");
drop table Exam;

    

select * from Student ;

select * from Exam;