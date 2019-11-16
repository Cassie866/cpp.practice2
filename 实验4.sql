insert into Message values
(7,'小李',18,'男'),
(8,'小王',19,'女'),
(9,'小杨',17,'男'),
(10,'小红',20,'女'),
(11,'小白',18,'女'),
(12,'小张',20,'男'),
(13,'小赵',19,'男');

select * from Message;

update Message set sex='男';

update Message set sex='女'where id=7;

delete Message where name='小李';