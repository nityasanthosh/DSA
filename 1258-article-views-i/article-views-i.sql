# Write your MySQL query statement below
Select author_id as id from Views 
where author_id = viewer_id
group by author_id order by id ASC;