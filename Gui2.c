#include <gtk/gtk.h>
#include <stdio.h>
static int Button_one_count = 1;
static int Button_two_count = 1;
unsigned int index123 = 0;





static void on_open_response (GtkDialog *dialog, int response)
{

}
static void Dialog(GSimpleAction *action, GVariant *parameter, GApplication *application)
{  
    GtkFileDialog *file_chooser = gtk_file_dialog_new();
    GtkFileFilter *file_filter = gtk_file_filter_new (); 
    const char path[21] = "/qqqq/home/jg/Videos"; 
    GFile *folder = g_file_new_for_path (path); 
    /*GtkFilterListModel *filter_list = gtk_filter_list_model_new (NULL, file_filter);
    gtk_filter_list_model_set_filter(filter_list, file_filter); */

    /*GtkWidget *window;
    GtkWidget *box;
    window = gtk_window_new();
    gtk_window_set_title(GTK_WINDOW(window), "File Chooser");
    box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_widget_set_halign(box, GTK_ALIGN_CENTER);
    gtk_widget_set_valign(box, GTK_ALIGN_CENTER);
    gtk_window_set_child(GTK_WINDOW(window), box);*/
    const char suffix[5] = "urtv"; 
    gtk_file_filter_add_suffix(file_filter, suffix); 
    gtk_file_dialog_set_default_filter(file_chooser, file_filter); 
    gtk_file_dialog_set_initial_folder(file_chooser, folder); 
    gtk_file_dialog_open (file_chooser, NULL, NULL, NULL, NULL); 


}


static void victor_second(GSimpleAction *action, GVariant *parameter, GApplication *application)
{
    GtkWidget *window;
    GtkWidget *box;
    GtkWidget *image;
    window = gtk_window_new();
    gtk_window_set_title(GTK_WINDOW(window), "Victor");
    box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_widget_set_halign(box, GTK_ALIGN_CENTER);
    gtk_widget_set_valign(box, GTK_ALIGN_CENTER);
    gtk_window_set_child(GTK_WINDOW(window), box);
    image = gtk_image_new_from_file("/qqqq/home/jg/Desktop/Victor2.png");
    gtk_image_set_pixel_size(GTK_IMAGE(image), 400);
    gtk_box_append(GTK_BOX(box), image);
    gtk_window_present(GTK_WINDOW(window));
}
/*Prints an image of Victor*/

static void victor_third(GSimpleAction *action, GVariant *parameter, GApplication *application)
{
    GtkWidget *window;
    GtkWidget *box;
    GtkWidget *image;
    window = gtk_window_new();
    gtk_window_set_title(GTK_WINDOW(window), "Victor");
    box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_widget_set_halign(box, GTK_ALIGN_CENTER);
    gtk_widget_set_valign(box, GTK_ALIGN_CENTER);
    gtk_window_set_child(GTK_WINDOW(window), box);
    image = gtk_image_new_from_file("/qqqq/home/jg/Desktop/Victor3.png");
    gtk_image_set_pixel_size(GTK_IMAGE(image), 400);
    gtk_box_append(GTK_BOX(box), image);
    gtk_window_present(GTK_WINDOW(window));
}
/*Prints another image of Victor*/

static void victor_first(GSimpleAction *action, GVariant *parameter, GApplication *application)
{
    GtkWidget *window;
    GtkWidget *box;
    GtkWidget *image;
    window = gtk_window_new();
    gtk_window_set_title(GTK_WINDOW(window), "Victor");
    box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_widget_set_halign(box, GTK_ALIGN_CENTER);
    gtk_widget_set_valign(box, GTK_ALIGN_CENTER);
    gtk_window_set_child(GTK_WINDOW(window), box);
    image = gtk_image_new_from_file("/qqqq/home/jg/Desktop/Victor1.png");
    gtk_image_set_pixel_size(GTK_IMAGE(image), 400);
    gtk_box_append(GTK_BOX(box), image);
    gtk_window_present(GTK_WINDOW(window));
}
/*Prints yet another image of victor*/

static void fullscreen_changed(GSimpleAction *action, GVariant *value, GtkWindow *win) 
{
  if (g_variant_get_boolean (value))
    gtk_window_maximize (win);
  else
    gtk_window_unmaximize (win);
  g_simple_action_set_state (action, value);
}
/*Makes the main window either fullscreen or not, depending.  */
static void quit_activated(GSimpleAction *action, GVariant *parameter, GApplication *application)
{
    g_application_quit(application);
}
/*Quit the application, and close all windows*/
static void get_file(GtkWidget *widget, gpointer data)
{
}
/*Unfinished.  This will be just straight C though, in order to open a file/edit it.  */
static void
print_hello(GtkWidget *widget,
            gpointer data)
{

    GtkWidget *window;
    GtkWidget *box;
    GtkWidget *button1;

    if (index123 == 0)
    {
        return;
    }
    if (index123 == 1)
    {
        window = gtk_window_new();
        gtk_window_set_title(GTK_WINDOW(window), "Monday");
    }
    if (index123 == 2)
    {
        window = gtk_window_new();
        gtk_window_set_title(GTK_WINDOW(window), "Tuesday");
    }
    if (index123 == 3)
    {
        window = gtk_window_new();
        gtk_window_set_title(GTK_WINDOW(window), "Wednesday");
    }
    if (index123 == 4)
    {
        window = gtk_window_new();
        gtk_window_set_title(GTK_WINDOW(window), "Thursday");
    }
    if (index123 == 5)
    {
        window = gtk_window_new();
        gtk_window_set_title(GTK_WINDOW(window), "Friday");
    }
    if (index123 == 6)
    {
        window = gtk_window_new();
        gtk_window_set_title(GTK_WINDOW(window), "Saturday");
    }
    if (index123 == 7)
    {
        window = gtk_window_new();
        gtk_window_set_title(GTK_WINDOW(window), "Sunday");
    }
    /*For each option (Corrosponds with dropdown index), create a new window and change the name of the window*/
    box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_widget_set_halign(box, GTK_ALIGN_CENTER);
    gtk_widget_set_valign(box, GTK_ALIGN_CENTER);
    /*Allign the widgets to the center of the screen*/
    gtk_window_set_child(GTK_WINDOW(window), box);
    /*Connect the box to the window*/
    button1 = gtk_button_new_with_label("Ye'Haw!");
    /*Create a button that says "Ye'Haw!"*/
    g_signal_connect_swapped(button1, "clicked", G_CALLBACK(gtk_window_destroy), window);
    /*When this button is pressed, close the window*/
    gtk_box_append(GTK_BOX(box), button1);
    gtk_window_present(GTK_WINDOW(window));
    /*Attatch the button to the box and present the window. */
}
/*print_hello is the function that creates a new window to edit the configuration for each day*/

static void
cb_test(GtkWidget *widget,
        gpointer data)
{
    index123 = gtk_drop_down_get_selected(GTK_DROP_DOWN(widget));
}
/*Update the index every time the user updates the dropdown list (So you can get data from the dropdown list)*/

static void about_new(GtkWidget *widget, gpointer data)
{
    GtkWidget *window;
    GtkWidget *box;
    GtkWidget *image;
    GtkWidget *label1;
    GtkWidget *label2;
    GtkWidget *label3;
    GtkWidget *label4;
    GtkWidget *label5;

    window = gtk_window_new();
    gtk_window_set_title(GTK_WINDOW(window), "About");

    box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_widget_set_halign(box, GTK_ALIGN_CENTER);
    gtk_widget_set_valign(box, GTK_ALIGN_CENTER);
    gtk_window_set_child(GTK_WINDOW(window), box);
    /*
        GError *error = NULL;
        GdkPixbuf *pix = gdk_pixbuf_new_from_file ("/qqqq/home/jg/Downloads/URTVLOGO.png", &error);
        if (pix == NULL) {
        g_printerr ("Error loading file: #%d %s\n", error->code, error->message);
        g_error_free (error);
        exit (1);
        }
        image = gtk_image_new_from_pixbuf (pix);
    */
    image = gtk_image_new_from_file("/qqqq/home/jg/Downloads/URTVLOGO.png");
    gtk_image_set_pixel_size(GTK_IMAGE(image), 300);

    label1 = gtk_label_new(NULL);
    label2 = gtk_label_new(NULL);
    label3 = gtk_label_new(NULL);
    label4 = gtk_label_new(NULL);
    label5 = gtk_label_new(NULL);

    gtk_label_set_markup(GTK_LABEL(label1), "<span font=\"20\" color=\"#000000\">"
                                            "<b>URTV!  (May our fair station live on forever!)</b>"
                                            "</span >");
    gtk_label_set_markup(GTK_LABEL(label2), "<span font=\"12\" color=\"#000000\">"
                                            "<small>This program was made in 2023/2024 to create a scheduled system for channel 3.2</small>"
                                            "</span >");
    gtk_label_set_markup(GTK_LABEL(label3), "<span font=\"12\" color=\"#000000\">"
                                            "<small>Everyone is permitted to utilize, modify, and re-distribute this program as they wish, so long as this program is credited</small>"
                                            "</span >");
    gtk_label_set_markup(GTK_LABEL(label5), "<span font=\"12\" color=\"#000000\">"
                                            "<small>GNU GPL 3.0 License https://www.gnu.org/licenses/gpl-3.0.en.html#license-text</small>"
                                            "</span >");
    gtk_label_set_markup(GTK_LABEL(label4), "<span font=\"12\" color=\"#000000\">"
                                            "<small>Have a nice day : )  -Jacob Greenberg (UofR Class of 2026)</small>"
                                            "</span >");

    gtk_box_append(GTK_BOX(box), image);
    gtk_box_append(GTK_BOX(box), label1);
    gtk_box_append(GTK_BOX(box), label2);
    gtk_box_append(GTK_BOX(box), label3);
    gtk_box_append(GTK_BOX(box), label5);
    gtk_box_append(GTK_BOX(box), label4);

    gtk_window_present(GTK_WINDOW(window));
}
/*About page.  This is where the about page gets displayed.  */

static void
activate(GtkApplication *app,
         gpointer user_data)
{
    GtkWidget *window;
    GtkWidget *button1;
    GtkWidget *button2;
    GtkWidget *box;
    GtkWidget *fixed;    
    GtkWidget *label;
    GtkWidget *label1;
    GtkWidget *label2;
    GtkWidget *day;

    /*Declare all your widgets*/
    char obama[30] = "No Selection";
    const char *Days[9] = {"No Selection", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", NULL};
    /*Create the index of days the dropdown box uses. */
    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "URTV for the win!");
    /*Create a new window and name that window "URTV for the win!""*/


    box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_widget_set_halign(box, GTK_ALIGN_CENTER);
    gtk_widget_set_valign(box, GTK_ALIGN_CENTER);
    gtk_window_set_child(GTK_WINDOW(window), box);
    /*Set up the GTK box and allignment for it.  */
    // GTKPopoverMenuBar

    GSimpleAction *act_quit = g_simple_action_new("quit", NULL);
    g_action_map_add_action(G_ACTION_MAP(app), G_ACTION(act_quit));
    g_signal_connect(act_quit, "activate", G_CALLBACK(quit_activated), app);
    //If the quit button is pressed, call the "quit_activated function"

    GSimpleAction *act_victor1 = g_simple_action_new("victor1", NULL);
    g_action_map_add_action(G_ACTION_MAP(app), G_ACTION(act_victor1));
    g_signal_connect(act_victor1, "activate", G_CALLBACK(victor_first), app);
    //if the victor1 button is pressed, activate the victor_first function

    GSimpleAction *act_victor2 = g_simple_action_new("victor2", NULL);
    g_action_map_add_action(G_ACTION_MAP(app), G_ACTION(act_victor2));
    g_signal_connect(act_victor2, "activate", G_CALLBACK(victor_second), app);
    //if the victor2 function is pressed, activate the victor_second function

    GSimpleAction *act_victor3 = g_simple_action_new("victor3", NULL);
    g_action_map_add_action(G_ACTION_MAP(app), G_ACTION(act_victor3));
    g_signal_connect(act_victor3, "activate", G_CALLBACK(victor_third), app);
    //if the victor3 function is pressed, activate the victor_third function

    GSimpleAction *act_dialog = g_simple_action_new("dialog", NULL);
    g_action_map_add_action(G_ACTION_MAP(app), G_ACTION(act_dialog));
    g_signal_connect(act_dialog, "activate", G_CALLBACK(Dialog), app);
    //Calls the file chooser stuff if it is called.  

    GSimpleAction *act_fullscreen = g_simple_action_new_stateful ("fullscreen", NULL, g_variant_new_boolean (FALSE));
    g_signal_connect (act_fullscreen, "change-state", G_CALLBACK (fullscreen_changed), window);
    g_action_map_add_action (G_ACTION_MAP (window), G_ACTION (act_fullscreen));
    //if the fullscreen button is pressed, enter the fullscreen_changed function with extra functions.  

    GMenu *menubar = g_menu_new();
    GMenu *menu = g_menu_new();
    GtkPopoverMenuBar *popover_menubar = gtk_popover_menu_bar_new_from_model(menu);
    GMenu *section1 = g_menu_new();
    GMenu *section2 = g_menu_new();
    GMenu *section3 = g_menu_new();
    GMenuItem *menu_item_fullscreen = g_menu_item_new("Full Screen", "win.fullscreen");
    GMenuItem *menu_item_red = g_menu_item_new("Victor1", "app.victor1");
    GMenuItem *menu_item_green = g_menu_item_new("Victor2", "app.victor2");
    GMenuItem *menu_item_blue = g_menu_item_new("Victor3", "app.victor3");
    GMenuItem *menu_item_dialog = g_menu_item_new("Choose File", "app.dialog");
    GMenuItem *menu_item_quit = g_menu_item_new("Quit", "app.quit");
    //Declare all the menu items and construct them all.  

    g_menu_append_item(section3, menu_item_fullscreen);
    g_menu_append_item(section2, menu_item_red);
    g_menu_append_item(section2, menu_item_green);
    g_menu_append_item(section2, menu_item_blue);
    g_menu_append_item(section1, menu_item_dialog);
    g_menu_append_item(section1, menu_item_quit);
    g_object_unref(menu_item_red);
    g_object_unref(menu_item_green);
    g_object_unref(menu_item_blue);
    g_object_unref(menu_item_fullscreen);
    g_object_unref(menu_item_dialog);
    g_object_unref(menu_item_quit);
    //Append items to larger sub-classes (sections)

    g_menu_append_submenu(menu, "File", G_MENU_MODEL(section1));
    g_menu_append_submenu(menu, "Victor", G_MENU_MODEL(section2));
    g_menu_append_submenu(menu, "Hi There!", G_MENU_MODEL(section3));
    g_menu_append_section(menubar, "Menu", G_MENU_MODEL(menu));
    //Put names to the sub-classes, and declare them as sub-sections.  
    g_object_unref(section1);
    g_object_unref(section2);
    g_object_unref(section3);
    g_object_unref(menu);
    //unreference for ease.  
    /*This is all the stuff for the menu bar.  */

    button1 = gtk_button_new_with_label("Confirm Selection");
    button2 = gtk_button_new_with_label("About");
    /*Set up the GTK button*/
    label = gtk_label_new(NULL);
    label1 = gtk_label_new(NULL);
    label2 = gtk_label_new(NULL);
    /*Declare the GTK Labels*/
    day = gtk_drop_down_new_from_strings(Days);
    /*Declare the GTK dropdown menu*/

    g_signal_connect(button1, "clicked", G_CALLBACK(print_hello), NULL);
    /*If the button was clicked, enter the "print_hello" function*/
    g_signal_connect_after(day, "notify::selected", G_CALLBACK(cb_test), NULL);
    /*If the drop_down button is activated (i.e. and option is clicked, call the "cb_test" function)*/
    g_signal_connect(button2, "clicked", G_CALLBACK(about_new), NULL);

    gtk_label_set_markup(GTK_LABEL(label1), "<span font=\"20\" color=\"#00205B\">"
                                            "<b>UR</b>"
                                            "</span >"
                                            "<span font=\"20\" color=\"#FFC70A\" style=\"italic\">"
                                            "<b>TV!</b>"
                                            "</span >");
    /*Markup text for the label.  */



    gtk_box_append(GTK_BOX(box), popover_menubar);
    gtk_box_append(GTK_BOX(box), label1);
    gtk_box_append(GTK_BOX(box), day);
    gtk_box_append(GTK_BOX(box), button1);
    gtk_box_append(GTK_BOX(box), button2);
    /*append the label, dropdown menu, button, menu-bar, and others to the GTK box*/
    gtk_window_present(GTK_WINDOW(window));
    /*present the window*/
}

int main(int argc,
         char **argv)
{
    GtkApplication *app;
    int status;
    int loop = 0;
    app = gtk_application_new("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);
    return status;
    /*Start the application*/
}
/*Main function*/