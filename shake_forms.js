(function($){
/**
 * Performing animation when error occured.
 */
 
Drupal.behaviors.shake_forms = {
  attach: function (context, settings) {
	$('form').each(function(){
		$(this).find(".form-submit").click(function(event){
			var form = $(this).parents("form").attr("id");
			var flg=0;
			$("#"+form).find(".form-text.required").each(function(){
				flg++;
				var textLength = $(this).val().length;
				if (textLength <= 0) {
					$(this).addClass('shake_error');
					event.preventDefault();
					if ((flg%2)==0) {
						$(this).shake({ direction: "right" });
					} else	 {
						$(this).shake({ direction: "left" });
					}
					 
				} else {					
					$(this).addClass("shake_success");
				}
			});
		});
			
	});	
	
	}
};
})(jQuery);



