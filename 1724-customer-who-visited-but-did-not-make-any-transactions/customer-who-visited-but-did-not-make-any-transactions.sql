# Write your MySQL query statement below
-- SELECT customer_id , Count(v.visit_id) as count_no_trans
-- FROM Visits v
-- Left join Transactions t
-- on v.visit_id = t.visit_id
-- where transaction_id is NULL
-- GROUP BY customer_id

SELECT customer_id , COUNT(v.visit_id) as count_no_trans
FROM Visits v
LEFT JOIN Transactions t
ON v.visit_id = t.visit_id
WHERE transaction_id IS NULL
GROUP BY customer_id
