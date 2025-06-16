# Write your MySQL query statement below
SELECT name
from Employee 
where id in (SELECT managerId from Employee
GROUP BY managerId having COUNT(*)>=5)




