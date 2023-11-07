# Write your MySQL query statement below
select MAX(SALARY) SecondHighestSalary from EMPLOYEE where SALARY<>(select MAX(SALARY) from EMPLOYEE);