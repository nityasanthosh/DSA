# Write your MySQL query statement below
SELECT s.user_id , Round(avg(if(c.action="confirmed",1,0)),2) as confirmation_rate
from Signups as s
Left Join Confirmations as c
On s.user_id = c.user_id
group by user_id;
