# Write your MySQL query statement below
SELECT product_name,year,price
FROM Sales as S
INNER JOIN Product as P
ON S.product_id = P.product_id