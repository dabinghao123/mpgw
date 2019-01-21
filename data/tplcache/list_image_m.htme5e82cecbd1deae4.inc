<?php
$z[0]=Array("field","",64,83);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",84,110);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",151,180);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",220,278);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("channel","\r\n      <li class=\"cat-item\"><a href=\"list.php?tid=[field:id/]\" title=\"[field:typename/]\">[field:typename/]</a> </li>\r\n      ",1470,1635);
$z[4][4]=array();
$z[4][4]['type']="son";
$z[5]=Array("list","\r\n  <div class=\"case-list-data\"> <a href=\"view.php?aid=[field:id/]\" title=\"[field:title/]\" class=\"s\">\r\n    <h6>[field:title/]</h6>\r\n    <p class=\"class cl\"> <span class=\"z\">所属行业:[field:typename/]</span> </p>\r\n    <div class=\"m\"> <img src=\"[field:litpic/]\"  alt=\"[field:title/]\"> </div>\r\n    <p class=\"des\">[field:description function='cn_substr(@me,100)'/]...</p>\r\n    <p class=\"all cl\"> <span class=\"z\">了解更多</span> <span class=\"y\"><i class=\"iconfont\">&#xe6a7;</i></span> </p>\r\n    </a> </div>\r\n  ",1984,2547);
$z[5][4]=array();
$z[5][4]['pagesize']="5";
$z[5][4]['titlelen']="36";
$z[6]=Array("pagelist","",2616,2673);
$z[6][4]=array();
$z[6][4]['listitem']="index,end,pageno";
$z[6][4]['listsize']="3";
$z[7]=Array("include","",2698,2735);
$z[7][4]=array();
$z[7][4]['filename']="foot_m.htm";

?>