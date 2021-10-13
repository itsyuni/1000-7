i = 1000 + 7;

function start(){
  if (i < 0) {
    audio.pause();
    clearInterval(timer);
  }
  i = i - 7;
  $('body').append('<h3>' + i + '</h3>');
  $('html, body').animate({scrollTop: $(document).height() + $(window).height()}, 100);
}
$('#start').on('click', function(){
  let timer = setInterval(start, 120);
});