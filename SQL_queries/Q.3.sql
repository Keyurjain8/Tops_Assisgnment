create database keyur_jain_22;

use keyur_jain_22;
-- syntax:
-- create table table_name(
-- col_name datatype constraints
-- );
create table Employee(
id int primary key auto_increment ,

first_name varchar(50),
last_name varchar(50) ,
DOB date
);


drop table Employee;

insert into Employee values
(101,"Tom","gupta","1985-05-04");

select * from Employee;

insert into student (first_name,last_name,DOB)values
("Tom","Gupta","1985-05-04");
SELECT first_name "EMPLOYEE NAME" FROM Employee;