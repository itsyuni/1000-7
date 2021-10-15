// дединсайдам привет, остальным соболезную
// by https://yuni.su
// за быстрокод спасибо https://github.com/motionarium

var dead: integer;
begin
   dead:=1000;
   writeln('У меня нет проблем');
   writeln('Кроме моей башки');
   writeln('Прости, я умер');
   while (dead > 7) do
   begin
     writeln(dead, ' - 7 = ', dead-7);
     dead:=dead-7;
     Sleep(1000);
   end;
   writeln('Теперь вы дединсайдик');
end.   
