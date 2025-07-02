# Write your MySQL query statement below
-- SELECT unique_id,name
-- FROM Employees 
-- LEFT JOIN EmployeeUNI
-- ON Employees.id = EmployeeUNI.id 

Select unique_id ,name 
from Employees 
left join EmployeeUNI
on Employees.id = EmployeeUNI.id