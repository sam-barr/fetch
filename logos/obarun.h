char *LOGO[] = {
"⢀⠰⡘⡌⡎⡪⡊⢎⢪⢊⢎⠪⡊⡎⡪⡊⢎⢪⢊⢎⠪⡊⡎⡪⡊⢎⢪⢊⢎⠪⡊⡎⡪⡊⢎⢪⢊⢆⢆⠀   ",
"⡢⡣⢣⢱⠸⡨⢪⢊⢆⠇⡎⡪⡪⡸⢰⢑⢕⢅⠇⡎⣪⡪⡼⠔⠗⠓⠑⠵⠜⡜⡌⢎⢢⠣⡣⡱⡑⡜⢔⢕   ",
"⡪⡸⡨⡢⢣⢃⢇⢕⢅⢇⠕⡕⡌⢎⢪⠸⡐⣅⡗⠞⠁⠀⠀⠀⡀⡠⡠⡰⡰⡠⡡⡑⡕⡱⡑⡌⡎⡜⢔⢕   ",
"⡪⢢⠣⡪⢪⠸⡐⡕⡌⡆⢇⢕⠜⡜⢌⢮⠞⠁⠀⠀⠀⡠⡰⡑⡕⢅⠇⡎⢆⢣⠪⡪⡘⡔⡱⡑⡜⢌⢎⢢   ",
"⡪⡊⡎⢜⢌⢎⢪⠢⡣⢪⠪⡢⠣⣣⠟⠁⠀⠀⠀⡠⡊⡆⡣⡪⡊⢎⢪⢊⢎⠪⡊⡆⡣⡱⡑⡜⡸⡨⡢⡣   ",
"⡪⡸⡨⢪⠢⡣⡱⡑⢕⢅⢇⢕⡯⠁⠀⠀⠀⢀⢎⢢⢱⠸⡨⡢⡃⡇⡕⡱⡸⡘⡜⢌⢎⢢⢣⠱⡑⡜⢔⢱   ",
"⡪⢢⢃⢇⢕⠕⡌⢎⢪⠢⣱⠏⠀⠀⠀⠀⡠⢣⢊⢎⢢⠣⡣⢪⠸⡐⡕⣱⣨⡪⣸⢨⠢⡣⢪⢊⢎⠜⡜⢔   ",
"⡪⡊⡆⢇⢪⢊⢎⢪⠢⣫⠃⠀⠀⠀⠀⡐⡜⢜⢌⠆⡇⡣⡱⡑⣕⠵⠋⠁⠀⠀⠀⠀⠁⢇⢣⢱⠸⡘⡌⡎   ",
"⡪⡸⡨⡪⡊⡆⡣⡱⣱⠃⠀⠀⠀⠀⠰⡘⡜⢔⢅⢇⠕⡕⢜⢼⠊⠀⠀⠀⠀⠀⠀⠀⠀⠨⡪⢢⠣⡣⡱⡘   ",
"⡪⡢⡱⡘⡔⢕⢱⢸⡊⠀⠀⠀⠀⠀⡣⢣⠪⡊⡆⡣⡱⡑⡽⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠨⡪⢢⢣⢱⠸⡨   ",
"⡪⢢⠣⡱⡸⡘⡔⡽⠀⠀⠀⠀⠀⠨⡊⡎⡪⢪⠸⡨⡢⣹⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢜⢸⢨⠢⡣⡱⡑   ",
"⡪⡊⡎⢜⢔⢱⢱⡃⠀⠀⠀⠀⠀⠨⡪⡸⡨⢪⢊⢎⠜⣞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡘⡜⢌⢆⢇⢣⠪⡪   ",
"⡪⡸⡨⢪⠢⡣⣱⠀⠀⠀⠀⠀⠀⠨⡊⡆⡣⢣⢱⢘⢌⣳⠀⠀⠀⠀⠀⠀⠀⠀⠀⡐⡕⢜⠜⡔⢅⢇⢕⢜   ",
"⡪⢢⢃⢇⢕⠜⢼⠀⠀⠀⠀⠀⠀⠈⢜⢌⢎⢪⠢⡣⡱⡰⢢⠀⠀⠀⠀⠀⡀⠀⡔⢕⠜⡜⢌⢎⢪⠢⡣⢪   ",
"⡪⡊⡆⢇⢎⢪⢺⡀⠀⠀⠀⠀⠀⠀⠀⢇⢪⠢⡣⡱⡘⡌⡎⡪⣢⡲⠒⠉⢀⢪⠸⡘⡜⢌⠎⡆⡣⡱⡸⡰   ",
"⡪⡸⡨⢪⠢⡣⡒⢇⠀⠀⠀⠀⠀⠀⠀⠀⠑⠑⠵⠼⠬⠮⠚⠚⠈⠀⢀⢔⢅⢇⢣⠣⡪⢪⢊⢎⠜⡌⡆⡣   ",
"⡪⢢⠣⡱⢱⢘⢌⢎⢆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢔⢱⢨⠢⡣⡊⡎⡪⡊⡆⡣⡱⢱⢘⠬   ",
"⡪⡊⢎⢪⠪⡸⡨⡢⢣⠢⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢠⢊⢆⢣⠪⡢⡣⡱⡸⡨⡢⢣⠪⡪⡸⡨⡊⡎   ",
"⠪⡊⡎⢆⢇⢕⠜⡌⢎⢪⢊⢆⢆⠤⡀⣀⢠⠠⡄⡲⡸⡘⡌⡎⡜⢔⢕⢱⢨⠢⡣⢪⠸⡨⡪⢢⢱⢘⢌⠎   ",
"⠈⠘⢌⢎⢢⠣⡱⡑⡕⢅⢇⢕⢜⢸⢨⠢⡃⡇⡕⢕⠜⡌⡪⡂⡇⡕⡜⢔⢕⠱⡑⡕⡱⡑⡜⢜⠔⡕⠅⠁   "
};
