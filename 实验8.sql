declare @sums int=0
declare @i int=1
while @i<=10
  begin
  if (@i%2)=0
    begin
    set @sums=@sums+@i
	print @i
	set @i=@i+1
	continue
    end 
  else   
    set @i=@i+1
  end
print @sums


declare @I int, @sums int
select  @I=1, @sums=0
while @I<=100
  begin
  set @sums=@sums+@I
  set @I=@I+1
  end
select @I,@sums



declare @temp1 char(20),@temp2 int;
select @temp1,@temp2;

set @temp1 = 'caomingge';
select @temp2 = 20170901;
select @temp1,@temp2;





