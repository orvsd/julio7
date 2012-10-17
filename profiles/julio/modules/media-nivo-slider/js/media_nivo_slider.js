/**
 * @file
 *  Applies the nivo slider functionality to the drupal blocks.
 */
 
(function ($) {
  Drupal.behaviors.mediaNivoSlider = {
    attach: function (context, settings) {
      // Iterate over all nivo sliders available via the Drupal javascript settings.
      for (var key in Drupal.settings.media_nivo_slider) {
        var slider = Drupal.settings.media_nivo_slider[key];
        
        // Set the block width, corrects the width setting when using varied image styles.
        var imageWidth = $("#" + key + "-media-nivo-slider").find('img:first').width();
        $("#" + key + "-media-nivo-slider").css('width', imageWidth);
         
        // Apply nivo slider to block
        $("#" + key + "-media-nivo-slider").nivoSlider({
          effect:slider.effect, //Specify sets like: 'fold,fade,sliceDown'
          slices:parseInt(slider.slices),
          boxCols:parseInt(slider.boxCols), // For box animations
          boxRows:parseInt(slider.boxRows),
          animSpeed:parseInt(slider.animSpeed), //Slide transition speed
          pauseTime:parseInt(slider.pauseTime),
          startSlide:0, //Set starting Slide (0 index)
          directionNav:true, //Next & Prev
          directionNavHide:true, //Only show on hover
          controlNav:true, //1,2,3...
          keyboardNav:true, //Use left & right arrows
          pauseOnHover:(slider.hoverPause == "true"), //Stop animation while hovering
          manualAdvance:false, //Force manual transitions
          captionOpacity:slider.captionOpacity //Universal caption opacity 
        });        
      }
    }
  };

}(jQuery));
