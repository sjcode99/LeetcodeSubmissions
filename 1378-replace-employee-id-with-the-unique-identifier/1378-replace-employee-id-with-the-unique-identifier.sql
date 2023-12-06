# Write your MySQL query statement below
select unique_id, name
from Employees as em
left join EmployeeUNI as euni
on em.id = euni.id;