declare @sums int=0
declare @i int=0
print '偶数为：'
while @i<=10
  begin
  set @i=@i+1
  if (@i%2)=0
    begin
    set @sums=@sums+@i
	print @i
    end 
  else   
    continue
  end
print '偶数和为：'
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
set @temp2 = @temp1;
select @temp1,@temp2;

declare @temp1 int,@temp2 int;
select @temp1,@temp2;
set @temp1 = 2017110;
set @temp2 = @temp1;
select @temp1,@temp2;




