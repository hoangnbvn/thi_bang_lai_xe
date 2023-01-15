#include <gtk/gtk.h>

    GtkWidget *window;
    GtkWidget *layout;
    GtkWidget *image;
    GtkWidget *btn1, *btn2, *btn3, *btn4, *btn5, *btn6, *btn7, *btn8, *btn9;
	GtkWidget *entry1, *entry2, *entry3, *entry4;
	GtkWidget *table1;
	
void createRoom( GtkWidget *widget, gpointer data);
void waitRoom1( GtkWidget *widget, gpointer data);
void attendRoom( GtkWidget *widget, gpointer data);
void resultTable( GtkWidget *widget, gpointer data);
void deleteLayout( GtkWidget *widget,gpointer data);
void readyLayout (GtkWidget *widget, gpointer data);
void goingLayout( GtkWidget *widget,gpointer data);
void endLayout( GtkWidget *widget,gpointer data);
void listLayout();
void drawMenu();

void createRoom(GtkWidget *widget, gpointer data) {
    gtk_container_remove(GTK_CONTAINER (window), layout);

    gtk_window_set_default_size(GTK_WINDOW(window), 1049, 600);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_title(GTK_WINDOW(window), "Tao phong thi");
        
    layout = gtk_layout_new(NULL, NULL);
    image = gtk_image_new_from_file("create_bg.png");
    gtk_layout_put(GTK_LAYOUT(layout), image, 0, 0);
    gtk_container_add(GTK_CONTAINER (window), layout);

	entry1 = gtk_entry_new();
	gtk_layout_put(GTK_LAYOUT(layout), entry1, 405,110);
	gtk_widget_set_size_request(entry1,290,50);
	
	entry2 = gtk_entry_new();
	gtk_layout_put(GTK_LAYOUT(layout), entry2, 405,210);
	gtk_widget_set_size_request(entry2,290,50);

	entry3 = gtk_entry_new();
	gtk_layout_put(GTK_LAYOUT(layout), entry3, 405,310);
	gtk_widget_set_size_request(entry3,290,50);

	entry4 = gtk_entry_new();
	gtk_layout_put(GTK_LAYOUT(layout), entry4, 405,410);
	gtk_widget_set_size_request(entry4,290,50);

	btn1 = gtk_button_new_with_label("Tao");
    gtk_layout_put(GTK_LAYOUT(layout), btn1, 428, 511);
    gtk_widget_set_size_request(btn1, 150, 50);
    	
    gtk_widget_show(layout);
    g_signal_connect(G_OBJECT(btn1),"clicked",G_CALLBACK(waitRoom1),NULL);
    gtk_widget_show_all(window);
}

void waitRoom1( GtkWidget *widget, gpointer data) {
	gtk_container_remove(GTK_CONTAINER (window), layout);

    gtk_window_set_default_size(GTK_WINDOW(window), 1049, 600);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_title(GTK_WINDOW(window), "Phong cho");
        
    layout = gtk_layout_new(NULL, NULL);
    image = gtk_image_new_from_file("wait_bg1.png");
    gtk_layout_put(GTK_LAYOUT(layout), image, 0, 0);
    gtk_container_add(GTK_CONTAINER (window), layout);

    btn1 = gtk_button_new_with_label("Thoat");
    gtk_layout_put(GTK_LAYOUT(layout), btn1, 255, 475);
    gtk_widget_set_size_request(btn1, 110, 50);
                
    btn2 = gtk_button_new_with_label("Bat dau");
    gtk_layout_put(GTK_LAYOUT(layout), btn2, 687, 475);
    gtk_widget_set_size_request(btn2, 110, 50);
    
    gtk_widget_show(layout);
    g_signal_connect(G_OBJECT(btn1),"clicked",G_CALLBACK(drawMenu),NULL);
    gtk_widget_show_all(window);
}

void attendRoom( GtkWidget *widget, gpointer data) {
	gtk_container_remove(GTK_CONTAINER (window), layout);

    gtk_window_set_default_size(GTK_WINDOW(window), 1049, 600);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_title(GTK_WINDOW(window), "Tham gia");
        
    layout = gtk_layout_new(NULL, NULL);
    image = gtk_image_new_from_file("attend.png");
    gtk_layout_put(GTK_LAYOUT(layout), image, 0, 0);
    gtk_container_add(GTK_CONTAINER (window), layout);

	entry1 = gtk_entry_new();
	gtk_layout_put(GTK_LAYOUT(layout), entry1, 119,278);
	gtk_widget_set_size_request(entry1,445,50);
	
    btn1 = gtk_button_new_with_label("Tham gia");
    gtk_layout_put(GTK_LAYOUT(layout), btn1, 126, 362);
    gtk_widget_set_size_request(btn1, 160, 50);

    btn2 = gtk_button_new_with_label("Thoat");
    gtk_layout_put(GTK_LAYOUT(layout), btn2, 126, 452);
    gtk_widget_set_size_request(btn2, 160, 50);

    gtk_widget_show(layout);
    g_signal_connect(G_OBJECT(btn2),"clicked",G_CALLBACK(drawMenu),NULL);
    gtk_widget_show_all(window);	
}

void resultTable( GtkWidget *widget, gpointer data) {
	gtk_container_remove(GTK_CONTAINER (window), layout);

    gtk_window_set_default_size(GTK_WINDOW(window), 1049, 600);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_title(GTK_WINDOW(window), "Ket qua phong thi");
        
    layout = gtk_layout_new(NULL, NULL);
    image = gtk_image_new_from_file("result_bg.png");
    gtk_layout_put(GTK_LAYOUT(layout), image, 0, 0);
    gtk_container_add(GTK_CONTAINER (window), layout);
	
  	table1 = gtk_table_new(4, 4, TRUE);
  	gtk_table_set_row_spacings(GTK_TABLE(table1), 2);
  	gtk_table_set_col_spacings(GTK_TABLE(table1), 2);
	
    btn1 = gtk_button_new_with_label("Thoat");
    gtk_layout_put(GTK_LAYOUT(layout), btn1, 471, 493);
    gtk_widget_set_size_request(btn1, 110, 50);
                
    gtk_widget_show(layout);
    g_signal_connect(G_OBJECT(btn1),"clicked",G_CALLBACK(drawMenu),NULL);
    gtk_widget_show_all(window);
}
void deleteLayout( GtkWidget *widget,gpointer data) {
    
    gtk_container_remove(GTK_CONTAINER (window), layout);
    
    layout = gtk_layout_new(NULL, NULL);
    image = gtk_image_new_from_file("background.png");
    gtk_layout_put(GTK_LAYOUT(layout), image, 0, 0);
    gtk_container_add(GTK_CONTAINER (window), layout);

    gtk_widget_show(layout);
    gtk_widget_show_all(window);
}

void readyLayout( GtkWidget *widget,gpointer data) {
    
    gtk_container_remove(GTK_CONTAINER (window), layout);
    
    //window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(window), 1049, 600);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_title(GTK_WINDOW(window), "Phong thi san sang");
    
    layout = gtk_layout_new(NULL, NULL);
    image = gtk_image_new_from_file("sansang_bg.png");
    gtk_layout_put(GTK_LAYOUT(layout), image, 0, 0);
    gtk_container_add(GTK_CONTAINER (window), layout);
        
    btn1 = gtk_button_new_with_label("Tham gia");
    gtk_layout_put(GTK_LAYOUT(layout), btn1, 750, 170);
    gtk_widget_set_size_request(btn1, 210, 50);
                
    btn2 = gtk_button_new_with_label("Tham gia");
    gtk_layout_put(GTK_LAYOUT(layout), btn2, 750, 253);
    gtk_widget_set_size_request(btn2, 210, 50);
                
    btn3 = gtk_button_new_with_label("Tham gia");
    gtk_layout_put(GTK_LAYOUT(layout), btn3, 750, 332);
    gtk_widget_set_size_request(btn3, 210, 50);
    
    btn4 = gtk_button_new_with_label("Tro lai");
    gtk_layout_put(GTK_LAYOUT(layout), btn4, 155, 457);
    gtk_widget_set_size_request(btn4, 185, 50);
    
    btn5 = gtk_button_new_with_label("Thoat");
    gtk_layout_put(GTK_LAYOUT(layout), btn5, 435, 457);
    gtk_widget_set_size_request(btn5, 185, 50);
    
    btn6 = gtk_button_new_with_label("Tiep theo");
    gtk_layout_put(GTK_LAYOUT(layout), btn6, 770, 457);
    gtk_widget_set_size_request(btn6, 185, 50);
    
    btn7 = gtk_button_new_with_label("Phong thi so mot");
    gtk_layout_put(GTK_LAYOUT(layout), btn7, 125, 170);
    gtk_widget_set_size_request(btn7, 556, 50);
    
    btn8 = gtk_button_new_with_label("Phong thi so hai");
    gtk_layout_put(GTK_LAYOUT(layout), btn8, 125, 253);
    gtk_widget_set_size_request(btn8, 556, 50);
    
    btn9 = gtk_button_new_with_label("Phong thi so ba");
    gtk_layout_put(GTK_LAYOUT(layout), btn9, 125, 332);
    gtk_widget_set_size_request(btn9, 556, 50);
        
    gtk_widget_show(layout);
    g_signal_connect(G_OBJECT(btn1),"clicked",G_CALLBACK(attendRoom),NULL);
    g_signal_connect(G_OBJECT(btn2),"clicked",G_CALLBACK(attendRoom),NULL);
    g_signal_connect(G_OBJECT(btn3),"clicked",G_CALLBACK(attendRoom),NULL);
    g_signal_connect(G_OBJECT(btn4),"clicked",G_CALLBACK(readyLayout),NULL);
    g_signal_connect(G_OBJECT(btn5),"clicked",G_CALLBACK(drawMenu),NULL);
    g_signal_connect(G_OBJECT(btn6),"clicked",G_CALLBACK(readyLayout),NULL);
    gtk_widget_show_all(window);
}

void goingLayout( GtkWidget *widget,gpointer data) {
    
    gtk_container_remove(GTK_CONTAINER (window), layout);
    
    //window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(window), 1049, 600);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_title(GTK_WINDOW(window), "Phong thi dang thi");
    
    layout = gtk_layout_new(NULL, NULL);
    image = gtk_image_new_from_file("dangthi_bg.png");
    gtk_layout_put(GTK_LAYOUT(layout), image, 0, 0);
    gtk_container_add(GTK_CONTAINER (window), layout);
    
    btn4 = gtk_button_new_with_label("Tro lai");
    gtk_layout_put(GTK_LAYOUT(layout), btn4, 155, 457);
    gtk_widget_set_size_request(btn4, 185, 50);
    
    btn5 = gtk_button_new_with_label("Thoat");
    gtk_layout_put(GTK_LAYOUT(layout), btn5, 435, 457);
    gtk_widget_set_size_request(btn5, 185, 50);
    
    btn6 = gtk_button_new_with_label("Tiep theo");
    gtk_layout_put(GTK_LAYOUT(layout), btn6, 770, 457);
    gtk_widget_set_size_request(btn6, 185, 50);
    
    btn7 = gtk_button_new_with_label("Phong thi so mot");
    gtk_layout_put(GTK_LAYOUT(layout), btn7, 125, 170);
    gtk_widget_set_size_request(btn7, 830, 50);
    
    btn8 = gtk_button_new_with_label("Phong thi so hai");
    gtk_layout_put(GTK_LAYOUT(layout), btn8, 125, 253);
    gtk_widget_set_size_request(btn8, 830, 50);
    
    btn9 = gtk_button_new_with_label("Phong thi so ba");
    gtk_layout_put(GTK_LAYOUT(layout), btn9, 125, 332);
    gtk_widget_set_size_request(btn9, 830, 50);
        
    gtk_widget_show(layout);
    g_signal_connect(G_OBJECT(btn4),"clicked",G_CALLBACK(goingLayout),NULL);
    g_signal_connect(G_OBJECT(btn5),"clicked",G_CALLBACK(drawMenu),NULL);
    g_signal_connect(G_OBJECT(btn6),"clicked",G_CALLBACK(goingLayout),NULL);
    gtk_widget_show_all(window);
}

void endLayout( GtkWidget *widget,gpointer data) {
    
    gtk_container_remove(GTK_CONTAINER (window), layout);
    
    //window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(window), 1049, 600);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_title(GTK_WINDOW(window), "Phong thi ket thuc");
    
    layout = gtk_layout_new(NULL, NULL);
    image = gtk_image_new_from_file("sansang_bg.png");
    gtk_layout_put(GTK_LAYOUT(layout), image, 0, 0);
    gtk_container_add(GTK_CONTAINER (window), layout);
        
    btn1 = gtk_button_new_with_label("Xem ket qua");
    gtk_layout_put(GTK_LAYOUT(layout), btn1, 750, 170);
    gtk_widget_set_size_request(btn1, 210, 50);
                
    btn2 = gtk_button_new_with_label("Xem ket qua");
    gtk_layout_put(GTK_LAYOUT(layout), btn2, 750, 253);
    gtk_widget_set_size_request(btn2, 210, 50);
                
    btn3 = gtk_button_new_with_label("Xem ket qua");
    gtk_layout_put(GTK_LAYOUT(layout), btn3, 750, 332);
    gtk_widget_set_size_request(btn3, 210, 50);
    
    btn4 = gtk_button_new_with_label("Tro lai");
    gtk_layout_put(GTK_LAYOUT(layout), btn4, 155, 457);
    gtk_widget_set_size_request(btn4, 185, 50);
    
    btn5 = gtk_button_new_with_label("Thoat");
    gtk_layout_put(GTK_LAYOUT(layout), btn5, 435, 457);
    gtk_widget_set_size_request(btn5, 185, 50);
    
    btn6 = gtk_button_new_with_label("Tiep theo");
    gtk_layout_put(GTK_LAYOUT(layout), btn6, 770, 457);
    gtk_widget_set_size_request(btn6, 185, 50);
    
    btn7 = gtk_button_new_with_label("Phong thi so mot");
    gtk_layout_put(GTK_LAYOUT(layout), btn7, 125, 170);
    gtk_widget_set_size_request(btn7, 556, 50);
    
    btn8 = gtk_button_new_with_label("Phong thi so hai");
    gtk_layout_put(GTK_LAYOUT(layout), btn8, 125, 253);
    gtk_widget_set_size_request(btn8, 556, 50);
    
    btn9 = gtk_button_new_with_label("Phong thi so ba");
    gtk_layout_put(GTK_LAYOUT(layout), btn9, 125, 332);
    gtk_widget_set_size_request(btn9, 556, 50);
        
    gtk_widget_show(layout);
    g_signal_connect(G_OBJECT(btn1),"clicked",G_CALLBACK(resultTable),NULL);
    g_signal_connect(G_OBJECT(btn2),"clicked",G_CALLBACK(resultTable),NULL);
    g_signal_connect(G_OBJECT(btn3),"clicked",G_CALLBACK(resultTable),NULL);
    g_signal_connect(G_OBJECT(btn4),"clicked",G_CALLBACK(endLayout),NULL);
    g_signal_connect(G_OBJECT(btn5),"clicked",G_CALLBACK(drawMenu),NULL);
    g_signal_connect(G_OBJECT(btn6),"clicked",G_CALLBACK(endLayout),NULL);
    gtk_widget_show_all(window);
}

void listLayout(){
    gtk_container_remove(GTK_CONTAINER (window), layout);
    layout = gtk_layout_new(NULL, NULL);
    
	
    image = gtk_image_new_from_file("bg2.png");
    gtk_layout_put(GTK_LAYOUT(layout), image, 0, 0);
    
    btn1 = gtk_button_new_with_label("San Sang");
    gtk_layout_put(GTK_LAYOUT(layout), btn1, 131, 270);
    gtk_widget_set_size_request(btn1, 230, 50);
    
    btn2 = gtk_button_new_with_label("Dang Thi");
    gtk_layout_put(GTK_LAYOUT(layout), btn2, 420, 270);
    gtk_widget_set_size_request(btn2, 230, 50);
    
    btn3 = gtk_button_new_with_label("Ket Thuc");
    gtk_layout_put(GTK_LAYOUT(layout), btn3, 705, 270);
    gtk_widget_set_size_request(btn3, 228, 50);
    
    btn4 = gtk_button_new_with_label("Tao Phong Thi");
    gtk_layout_put(GTK_LAYOUT(layout), btn4, 430, 455);
    gtk_widget_set_size_request(btn4, 190, 55);
    
    gtk_container_add(GTK_CONTAINER (window), layout);
    gtk_widget_show(layout);
    g_signal_connect(G_OBJECT(btn1),"clicked",G_CALLBACK(readyLayout),NULL);
    g_signal_connect(G_OBJECT(btn2),"clicked",G_CALLBACK(goingLayout),NULL);
    g_signal_connect(G_OBJECT(btn3),"clicked",G_CALLBACK(endLayout),NULL);
    g_signal_connect(G_OBJECT(btn4),"clicked",G_CALLBACK(createRoom),NULL);
    
    //g_signal_connect(G_OBJECT(btn3),"clicked",G_CALLBACK(gtk_main_quit),NULL);
    gtk_widget_show_all(window);
}


void drawMenu(){
    gtk_container_remove(GTK_CONTAINER (window), layout);
    layout = gtk_layout_new(NULL, NULL);
    
	
    image = gtk_image_new_from_file("background.png");
    gtk_layout_put(GTK_LAYOUT(layout), image, 0, 0);
    
    btn1 = gtk_button_new_with_label("Luy\u1ec7n t\u1eadp");
    gtk_layout_put(GTK_LAYOUT(layout), btn1, 650, 350);
    gtk_widget_set_size_request(btn1, 220, 50);
    
    btn2 = gtk_button_new_with_label("V\u00e0o thi");
    gtk_layout_put(GTK_LAYOUT(layout), btn2, 700, 420);
    gtk_widget_set_size_request(btn2, 220, 50);
    
    btn3 = gtk_button_new_with_label("Tho\u00e1t");
    gtk_layout_put(GTK_LAYOUT(layout), btn3, 630, 490);
    gtk_widget_set_size_request(btn3, 220, 50);
    
    gtk_container_add(GTK_CONTAINER (window), layout);
    gtk_widget_show(layout);
    g_signal_connect(G_OBJECT(btn1),"clicked",G_CALLBACK(deleteLayout),NULL);
    g_signal_connect(G_OBJECT(btn2),"clicked",G_CALLBACK(listLayout),NULL);
    g_signal_connect(G_OBJECT(btn3),"clicked",G_CALLBACK(gtk_main_quit),NULL);
    gtk_widget_show_all(window);
    

}

int main( int argc, char *argv[])
{
    
    
    
    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    
    gtk_window_set_default_size(GTK_WINDOW(window), 1049, 600);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_title(GTK_WINDOW(window), "\u00d4n Thi L\u00e1i Xe");
    
    drawMenu();
    
	g_signal_connect_swapped(G_OBJECT(window),"destroy",G_CALLBACK(gtk_main_quit), NULL);

    gtk_main();

    return 0;
}


