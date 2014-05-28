<div class="panel-display panel-nerds-three-col clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel panel-top">
    <div class="inside"><?php print $content['top']; ?></div>
  </div>
  <div class="columns-wrapper">
    <div class="panel-panel panel-left">
      <div class="inside"><?php print $content['left']; ?></div>
    </div>
    <div class="panel-panel panel-main">
      <div class="inside"><?php print $content['main']; ?></div>
    </div>
    <div class="panel-panel panel-right">
      <div class="inside"><?php print $content['right']; ?></div>
    </div>
  </div>
</div>
