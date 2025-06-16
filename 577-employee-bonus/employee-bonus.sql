# Write your MySQL query statement below
SELECT name , bonus 
FROM Employee e
Left Join Bonus b
ON e.empId=b.empId
where bonus < 1000 OR bonus is NULL