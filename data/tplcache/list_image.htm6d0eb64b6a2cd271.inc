<?php
$z[0]=Array("field","",261,280);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",281,307);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",348,377);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",417,475);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",644,679);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",836,1220);
$z[5][4]=array();
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("channel","\r\n    <li class=\"cat-item\"><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n    ",1435,1651);
$z[6][4]=array();
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<li class='cat-item current-cat'><a href='~typelink~'>~typename~</a></li>";
$z[7]=Array("list","\r\n    <div class='data'>\r\n      <div class=\"m\"> <a href=\"[field:arcurl/]\" class=\"imgurl\"> <img width=\"300\" height=\"200\" src=\"[field:litpic/]\" class=\"attachment-post-thumbnail wp-post-image\" alt=\"[field:title/]\"/> </a> </div>\r\n      <div class=\"info\">\r\n        <h2><em class=\"view\"><script src=\"/plus/count.php?view=yes&aid=[field:id/]&mid=[field:mid/]\" type='text/javascript' language=\"javascript\"></script></em><a href=\"[field:arcurl/]\" rel=\"bookmark\">[field:title/]</a></h2>\r\n      </div>\r\n    </div>\r\n   ",1732,2290);
$z[7][4]=array();
$z[7][4]['pagesize']="12";
$z[7][4]['titlelen']="50";
$z[8]=Array("pagelist","",2333,2399);
$z[8][4]=array();
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[8][4]['listsize']="3";
$z[9]=Array("include","",2432,2467);
$z[9][4]=array();
$z[9][4]['filename']="foot.htm";

?>