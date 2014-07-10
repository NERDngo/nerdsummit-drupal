<div class="panel-display panel-nerds-two-col clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panels-top">
    <div class="panel-panel panel-col panel-col-left">
      <div class="inside"><?php print $content['top_left']; ?></div>
    </div>

    <div class="panel-panel panel-col panel-col-right">
      <div class="inside"><?php print $content['top_right']; ?></div>
    </div>
  </div>

  <div class="panel-panel panel-middle">
    <div class="inside"><?php print $content['middle']; ?></div>
  </div>
  <div class="panel-panel panel-bottom">
    <div class="inside"><?php print $content['bottom']; ?></div>
  </div>
</div>
