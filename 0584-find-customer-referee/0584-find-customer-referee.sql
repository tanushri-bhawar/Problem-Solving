# Write your MySQL query statement below
select c.name As name from Customer c
where referee_id is NULL or referee_id !=2; 