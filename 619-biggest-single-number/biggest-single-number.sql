select max(m.num) as num from Mynumbers m
where m.num In (
    select n.num from Mynumbers n
    group by n.num
    having count(n.num) = 1
);