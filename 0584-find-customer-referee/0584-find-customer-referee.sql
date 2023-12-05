# Write your MySQL query statement below
select name from Customer where referee_id NOT IN (2) || referee_id IS null;