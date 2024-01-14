#include <gtk/gtk.h>
#include <stdio.h>
static int Button_one_count = 1;
static int Button_two_count = 1;
unsigned int index123 = 0;
/*By all modern estimates, this program will be (Without any logic concerning actually storing the presets and saving them), so literally just a GUI, 
35,000 lines.  All C.  I'm going insane.  Like... actually insane.  */

void sunday(); 
static void Sun1 (GtkDialog *dialog, int response); 
void saturday(); 
void friday(); 
void thursday(); 
void wednesday(); 
void tuesday(); 
void monday(); 
static void Dialog(GSimpleAction *action, GVariant *parameter, GApplication *application); 
static void victor_second(GSimpleAction *action, GVariant *parameter, GApplication *application); 
static void victor_third(GSimpleAction *action, GVariant *parameter, GApplication *application); 
static void victor_first(GSimpleAction *action, GVariant *parameter, GApplication *application); 
static void fullscreen_changed(GSimpleAction *action, GVariant *value, GtkWindow *win); 
static void quit_activated(GSimpleAction *action, GVariant *parameter, GApplication *application); 
static void get_file(GtkWidget *widget, gpointer data); 
static void print_hello(GtkWidget *widget, gpointer data); 
static void cb_test(GtkWidget *widget, gpointer data); 
static void about_new(GtkWidget *widget, gpointer data); 
static void activate(GtkApplication *app, gpointer user_data); 
/*Declare all the functions*/

int
grab_int_value (GtkSpinButton *button,
                gpointer       user_data)
{
  return gtk_spin_button_get_value_as_int (button);
}


void sunday()
{
    GtkWidget *window;
    GtkGrid *Grid;
    GtkWidget *button1;
    GtkWidget *button2; 
    GtkWidget *button3; 
    GtkWidget *button4; 
    GtkWidget *button5; 
    GtkWidget *button6; 
    GtkWidget *button7; 
    GtkWidget *button8; 
    GtkWidget *button9; 
    GtkWidget *button10; 
    GtkWidget *button11; 
    GtkWidget *button12; 
    GtkWidget *button13; 
    GtkWidget *button14; 
    GtkWidget *button15; 
    GtkWidget *button16; 
    GtkWidget *button17; 
    GtkWidget *button18; 
    GtkWidget *button19; 
    GtkWidget *button20; 
    GtkWidget *button21; 
    GtkWidget *button22; 
    GtkWidget *button23; 
    GtkWidget *button24; 
    GtkWidget *button25; 

    /*These are all the widgets.  There are 24 buttons due to the 24 hours in a day.  */
    window = gtk_window_new();
    gtk_window_set_title(GTK_WINDOW(window), "Sunday");
    Grid = gtk_grid_new(); 
    gtk_window_set_child(GTK_WINDOW(window), Grid);
    /*Construct the window and the grid as it's child.  */
    button1 = gtk_button_new_with_label("12AM");
    button2 = gtk_button_new_with_label("1AM");
    button3 = gtk_button_new_with_label("2AM");
    button4 = gtk_button_new_with_label("3AM");
    button5 = gtk_button_new_with_label("4AM");
    button6 = gtk_button_new_with_label("5AM");
    button7 = gtk_button_new_with_label("6AM");
    button8 = gtk_button_new_with_label("7AM");
    button9 = gtk_button_new_with_label("8AM");
    button10 = gtk_button_new_with_label("9AM");
    button11 = gtk_button_new_with_label("10AM");
    button12 = gtk_button_new_with_label("11AM");
    button13 = gtk_button_new_with_label("12PM");
    button14 = gtk_button_new_with_label("1PM");
    button15 = gtk_button_new_with_label("2PM");
    button16 = gtk_button_new_with_label("3PM");
    button17 = gtk_button_new_with_label("4PM");
    button18 = gtk_button_new_with_label("5PM");
    button19 = gtk_button_new_with_label("6PM");
    button20 = gtk_button_new_with_label("7PM");
    button21 = gtk_button_new_with_label("8PM");
    button22 = gtk_button_new_with_label("9PM");
    button23 = gtk_button_new_with_label("10PM");
    button24 = gtk_button_new_with_label("11PM");
    button25 = gtk_button_new_with_label("Confirm");

    /*Create 24 buttons that list the hour*/
    g_signal_connect_swapped(button1, "clicked", G_CALLBACK(Sun1), NULL);
    g_signal_connect_swapped(button2, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button3, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button4, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button5, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button6, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button7, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button8, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button9, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button10, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button11, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button12, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button13, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button14, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button15, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button16, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button17, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button18, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button19, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button20, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button21, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button22, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button23, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button24, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button25, "clicked", G_CALLBACK(gtk_window_destroy), window);

    /*When any button is pressed, close the window
    This will change later on in the program, but it is easier to do it this way for now.  */
    gtk_grid_attach(Grid, button1, 1, 1, 1, 1); 
    gtk_grid_attach(Grid, button2, 1, 2, 1, 1); 
    gtk_grid_attach(Grid, button3, 1, 3, 1, 1); 
    gtk_grid_attach(Grid, button4, 1, 4, 1, 1); 
    gtk_grid_attach(Grid, button5, 1, 5, 1, 1); 
    gtk_grid_attach(Grid, button6, 1, 6, 1, 1); 
    gtk_grid_attach(Grid, button7, 2, 1, 1, 1); 
    gtk_grid_attach(Grid, button8, 2, 2, 1, 1); 
    gtk_grid_attach(Grid, button9, 2, 3, 1, 1); 
    gtk_grid_attach(Grid, button10, 2, 4, 1, 1); 
    gtk_grid_attach(Grid, button11, 2, 5, 1, 1); 
    gtk_grid_attach(Grid, button12, 2, 6, 1, 1); 
    gtk_grid_attach(Grid, button13, 3, 1, 1, 1); 
    gtk_grid_attach(Grid, button14, 3, 2, 1, 1); 
    gtk_grid_attach(Grid, button15, 3, 3, 1, 1); 
    gtk_grid_attach(Grid, button16, 3, 4, 1, 1); 
    gtk_grid_attach(Grid, button17, 3, 5, 1, 1); 
    gtk_grid_attach(Grid, button18, 3, 6, 1, 1); 
    gtk_grid_attach(Grid, button19, 4, 1, 1, 1); 
    gtk_grid_attach(Grid, button20, 4, 2, 1, 1); 
    gtk_grid_attach(Grid, button21, 4, 3, 1, 1); 
    gtk_grid_attach(Grid, button22, 4, 4, 1, 1); 
    gtk_grid_attach(Grid, button23, 4, 5, 1, 1); 
    gtk_grid_attach(Grid, button24, 4, 6, 1, 1); 
    gtk_grid_attach(Grid, button25, 1, 7, 4, 1); 
    gtk_window_present(GTK_WINDOW(window));
    /*Attatch the buttons to the Grid and organize them accordingly.  Also, present the window and it's child. */
}

static void Sun1 (GtkDialog *dialog, int response)
{
    GtkWidget *window;
    GtkGrid *Grid;
    GtkWidget *button1;
    GtkWidget *number; 
    GtkWidget *entry; 
    GtkWidget *entry1; 
    GtkWidget *entry2; 
    GtkWidget *label1; 
    GtkWidget *label2; 
    GtkWidget *label3; 
    GtkWidget *label4; 
    GtkAdjustment *adjustment;

    GtkWidget *anumber; 
    GtkWidget *aentry; 
    GtkWidget *aentry1; 
    GtkWidget *aentry2; 
    GtkAdjustment *aadjustment;

    GtkWidget *bnumber; 
    GtkWidget *bentry; 
    GtkWidget *bentry1; 
    GtkWidget *bentry2; 
    GtkAdjustment *badjustment;

    GtkWidget *cnumber; 
    GtkWidget *centry; 
    GtkWidget *centry1; 
    GtkWidget *centry2; 
    GtkAdjustment *cadjustment;

    GtkWidget *dnumber; 
    GtkWidget *dentry; 
    GtkWidget *dentry1; 
    GtkWidget *dentry2; 
    GtkAdjustment *dadjustment;

    GtkWidget *enumber; 
    GtkWidget *eentry; 
    GtkWidget *eentry1; 
    GtkWidget *eentry2; 
    GtkAdjustment *eadjustment;

    GtkWidget *fnumber; 
    GtkWidget *fentry; 
    GtkWidget *fentry1; 
    GtkWidget *fentry2; 
    GtkAdjustment *fadjustment;

    GtkWidget *gnumber; 
    GtkWidget *gentry; 
    GtkWidget *gentry1; 
    GtkWidget *gentry2; 
    GtkAdjustment *gadjustment;

    GtkWidget *hnumber; 
    GtkWidget *hentry; 
    GtkWidget *hentry1; 
    GtkWidget *hentry2;  
    GtkAdjustment *hadjustment;

    GtkWidget *inumber; 
    GtkWidget *ientry; 
    GtkWidget *ientry1; 
    GtkWidget *ientry2; 
    GtkAdjustment *iadjustment;

    GtkWidget *jnumber; 
    GtkWidget *jentry; 
    GtkWidget *jentry1; 
    GtkWidget *jentry2;     
    GtkAdjustment *jadjustment;


    window = gtk_window_new();
    gtk_window_set_title(GTK_WINDOW(window), "Sunday, 12AM");
    Grid = gtk_grid_new(); 
    gtk_window_set_child(GTK_WINDOW(window), Grid);
    adjustment = gtk_adjustment_new (1.0, 1.0, 10.0, 1.0, 5.0, 0.0);
    button1 = gtk_button_new_with_label("Confirm");
    g_signal_connect_swapped(button1, "clicked", G_CALLBACK(gtk_window_destroy), window);

    number = gtk_spin_button_new (adjustment, 1.0, 0);
    entry = gtk_entry_new(); 
    entry1 = gtk_entry_new(); 
    entry2 = gtk_entry_new();

    aadjustment = gtk_adjustment_new (2.0, 1.0, 10.0, 1.0, 5.0, 0.0);
    anumber = gtk_spin_button_new (aadjustment, 1.0, 0);
    aentry = gtk_entry_new(); 
    aentry1 = gtk_entry_new(); 
    aentry2 = gtk_entry_new(); 

    badjustment = gtk_adjustment_new (3.0, 1.0, 10.0, 1.0, 5.0, 0.0);
    bnumber = gtk_spin_button_new (badjustment, 1.0, 0);
    bentry = gtk_entry_new(); 
    bentry1 = gtk_entry_new(); 
    bentry2 = gtk_entry_new(); 

    cadjustment = gtk_adjustment_new (4.0, 1.0, 10.0, 1.0, 5.0, 0.0);
    cnumber = gtk_spin_button_new (cadjustment, 1.0, 0);
    centry = gtk_entry_new(); 
    centry1 = gtk_entry_new(); 
    centry2 = gtk_entry_new();     

    dadjustment = gtk_adjustment_new (5.0, 1.0, 10.0, 1.0, 5.0, 0.0);
    dnumber = gtk_spin_button_new (dadjustment, 1.0, 0);
    dentry = gtk_entry_new(); 
    dentry1 = gtk_entry_new(); 
    dentry2 = gtk_entry_new();

    eadjustment = gtk_adjustment_new (6.0, 1.0, 10.0, 1.0, 5.0, 0.0);
    enumber = gtk_spin_button_new (eadjustment, 1.0, 0);
    eentry = gtk_entry_new(); 
    eentry1 = gtk_entry_new(); 
    eentry2 = gtk_entry_new(); 

    fadjustment = gtk_adjustment_new (7.0, 1.0, 10.0, 1.0, 5.0, 0.0);
    fnumber = gtk_spin_button_new (fadjustment, 1.0, 0);
    fentry = gtk_entry_new(); 
    fentry1 = gtk_entry_new(); 
    fentry2 = gtk_entry_new();  

    gadjustment = gtk_adjustment_new (8.0, 1.0, 10.0, 1.0, 5.0, 0.0);
    gnumber = gtk_spin_button_new (gadjustment, 1.0, 0);
    gentry = gtk_entry_new(); 
    gentry1 = gtk_entry_new(); 
    gentry2 = gtk_entry_new(); 

    hadjustment = gtk_adjustment_new (9.0, 1.0, 10.0, 1.0, 5.0, 0.0);
    hnumber = gtk_spin_button_new (hadjustment, 1.0, 0);
    hentry = gtk_entry_new(); 
    hentry1 = gtk_entry_new(); 
    hentry2 = gtk_entry_new();  

    iadjustment = gtk_adjustment_new (10.0, 1.0, 10.0, 1.0, 5.0, 0.0);
    inumber = gtk_spin_button_new (iadjustment, 1.0, 0);
    ientry = gtk_entry_new(); 
    ientry1 = gtk_entry_new(); 
    ientry2 = gtk_entry_new();  

    jadjustment = gtk_adjustment_new (1.0, 0.0, 10.0, 1.0, 5.0, 0.0);
    jnumber = gtk_spin_button_new (jadjustment, 1.0, 0);
    jentry = gtk_entry_new(); 
    jentry1 = gtk_entry_new(); 
    jentry2 = gtk_entry_new();      

    label1 = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(label1), "<span font=\"12\" color=\"#000000\">"
                                            "<b>Order</b>"
                                            "</span >");
    label2 = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(label2), "<span font=\"12\" color=\"#000000\">"
                                            "<b>Common Name</b>"
                                            "</span >");
    label3 = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(label3), "<span font=\"12\" color=\"#000000\">"
                                            "<b>Path</b>"
                                            "</span >");
    label4 = gtk_label_new(NULL);
    gtk_label_set_markup(GTK_LABEL(label4), "<span font=\"12\" color=\"#000000\">"
                                            "<b>Time (Seconds)</b>"
                                            "</span >");


    gtk_grid_attach(Grid, label1, 1, 1, 1, 1); 
    gtk_grid_attach(Grid, label2, 2, 1, 1, 1); 
    gtk_grid_attach(Grid, label3, 3, 1, 1, 1); 
    gtk_grid_attach(Grid, label4, 4, 1, 1, 1); 

    gtk_grid_attach(Grid, button1, 1, 12, 4, 1); 

    gtk_grid_attach(Grid, number, 1, 2, 1, 1); 
    gtk_grid_attach(Grid, entry, 2, 2, 1, 1); 
    gtk_grid_attach(Grid, entry1, 3, 2, 1, 1); 
    gtk_grid_attach(Grid, entry2, 4, 2, 1, 1); 

    gtk_grid_attach(Grid, anumber, 1, 3, 1, 1); 
    gtk_grid_attach(Grid, aentry, 2, 3, 1, 1); 
    gtk_grid_attach(Grid, aentry1, 3, 3, 1, 1); 
    gtk_grid_attach(Grid, aentry2, 4, 3, 1, 1);     

    gtk_grid_attach(Grid, bnumber, 1, 4, 1, 1); 
    gtk_grid_attach(Grid, bentry, 2, 4, 1, 1); 
    gtk_grid_attach(Grid, bentry1, 3, 4, 1, 1); 
    gtk_grid_attach(Grid, bentry2, 4, 4, 1, 1); 

    gtk_grid_attach(Grid, cnumber, 1, 5, 1, 1); 
    gtk_grid_attach(Grid, centry, 2, 5, 1, 1); 
    gtk_grid_attach(Grid, centry1, 3, 5, 1, 1); 
    gtk_grid_attach(Grid, centry2, 4, 5, 1, 1); 

    gtk_grid_attach(Grid, dnumber, 1, 6, 1, 1); 
    gtk_grid_attach(Grid, dentry, 2, 6, 1, 1); 
    gtk_grid_attach(Grid, dentry1, 3, 6, 1, 1); 
    gtk_grid_attach(Grid, dentry2, 4, 6, 1, 1);

    gtk_grid_attach(Grid, enumber, 1, 7, 1, 1); 
    gtk_grid_attach(Grid, eentry, 2, 7, 1, 1); 
    gtk_grid_attach(Grid, eentry1, 3, 7, 1, 1); 
    gtk_grid_attach(Grid, eentry2, 4, 7, 1, 1); 

    gtk_grid_attach(Grid, fnumber, 1, 8, 1, 1); 
    gtk_grid_attach(Grid, fentry, 2, 8, 1, 1); 
    gtk_grid_attach(Grid, fentry1, 3, 8, 1, 1); 
    gtk_grid_attach(Grid, fentry2, 4, 8, 1, 1); 

    gtk_grid_attach(Grid, hnumber, 1, 9, 1, 1); 
    gtk_grid_attach(Grid, hentry, 2, 9, 1, 1); 
    gtk_grid_attach(Grid, hentry1, 3, 9, 1, 1); 
    gtk_grid_attach(Grid, hentry2, 4, 9, 1, 1); 
       
    gtk_grid_attach(Grid, inumber, 1, 10, 1, 1); 
    gtk_grid_attach(Grid, ientry, 2, 10, 1, 1); 
    gtk_grid_attach(Grid, ientry1, 3, 10, 1, 1); 
    gtk_grid_attach(Grid, ientry2, 4, 10, 1, 1);     

    gtk_window_present(GTK_WINDOW(window));

  // creates the spinbutton, with no decimal places

}
/*This one is for editing the first hour.  Once this gets completed, it can get copied whatever 24*7 is times
Is this a terrible way to do this?  Yes.  Does it work?  Yes.  Do I have to worry about system resources?  No.
Ergo, is it fine?  Yes.  Am I going crazy?  : )*/


void saturday()
{
    GtkWidget *window;
    GtkGrid *Grid;
    GtkWidget *button1;
    GtkWidget *button2; 
    GtkWidget *button3; 
    GtkWidget *button4; 
    GtkWidget *button5; 
    GtkWidget *button6; 
    GtkWidget *button7; 
    GtkWidget *button8; 
    GtkWidget *button9; 
    GtkWidget *button10; 
    GtkWidget *button11; 
    GtkWidget *button12; 
    GtkWidget *button13; 
    GtkWidget *button14; 
    GtkWidget *button15; 
    GtkWidget *button16; 
    GtkWidget *button17; 
    GtkWidget *button18; 
    GtkWidget *button19; 
    GtkWidget *button20; 
    GtkWidget *button21; 
    GtkWidget *button22; 
    GtkWidget *button23; 
    GtkWidget *button24; 
    /*These are all the widgets.  There are 24 buttons due to the 24 hours in a day.  */
    window = gtk_window_new();
    gtk_window_set_title(GTK_WINDOW(window), "Saturday");
    Grid = gtk_grid_new(); 
    gtk_window_set_child(GTK_WINDOW(window), Grid);
    /*Construct the window and the grid as it's child.  */
    button1 = gtk_button_new_with_label("12AM");
    button2 = gtk_button_new_with_label("1AM");
    button3 = gtk_button_new_with_label("2AM");
    button4 = gtk_button_new_with_label("3AM");
    button5 = gtk_button_new_with_label("4AM");
    button6 = gtk_button_new_with_label("5AM");
    button7 = gtk_button_new_with_label("6AM");
    button8 = gtk_button_new_with_label("7AM");
    button9 = gtk_button_new_with_label("8AM");
    button10 = gtk_button_new_with_label("9AM");
    button11 = gtk_button_new_with_label("10AM");
    button12 = gtk_button_new_with_label("11AM");
    button13 = gtk_button_new_with_label("12PM");
    button14 = gtk_button_new_with_label("1PM");
    button15 = gtk_button_new_with_label("2PM");
    button16 = gtk_button_new_with_label("3PM");
    button17 = gtk_button_new_with_label("4PM");
    button18 = gtk_button_new_with_label("5PM");
    button19 = gtk_button_new_with_label("6PM");
    button20 = gtk_button_new_with_label("7PM");
    button21 = gtk_button_new_with_label("8PM");
    button22 = gtk_button_new_with_label("9PM");
    button23 = gtk_button_new_with_label("10PM");
    button24 = gtk_button_new_with_label("11PM");
    /*Create 24 buttons that list the hour*/
    g_signal_connect_swapped(button1, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button2, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button3, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button4, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button5, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button6, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button7, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button8, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button9, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button10, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button11, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button12, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button13, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button14, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button15, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button16, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button17, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button18, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button19, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button20, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button21, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button22, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button23, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button24, "clicked", G_CALLBACK(gtk_window_destroy), window);
    /*When any button is pressed, close the window
    This will change later on in the program, but it is easier to do it this way for now.  */
    gtk_grid_attach(Grid, button1, 1, 1, 1, 1); 
    gtk_grid_attach(Grid, button2, 1, 2, 1, 1); 
    gtk_grid_attach(Grid, button3, 1, 3, 1, 1); 
    gtk_grid_attach(Grid, button4, 1, 4, 1, 1); 
    gtk_grid_attach(Grid, button5, 1, 5, 1, 1); 
    gtk_grid_attach(Grid, button6, 1, 6, 1, 1); 
    gtk_grid_attach(Grid, button7, 2, 1, 1, 1); 
    gtk_grid_attach(Grid, button8, 2, 2, 1, 1); 
    gtk_grid_attach(Grid, button9, 2, 3, 1, 1); 
    gtk_grid_attach(Grid, button10, 2, 4, 1, 1); 
    gtk_grid_attach(Grid, button11, 2, 5, 1, 1); 
    gtk_grid_attach(Grid, button12, 2, 6, 1, 1); 
    gtk_grid_attach(Grid, button13, 3, 1, 1, 1); 
    gtk_grid_attach(Grid, button14, 3, 2, 1, 1); 
    gtk_grid_attach(Grid, button15, 3, 3, 1, 1); 
    gtk_grid_attach(Grid, button16, 3, 4, 1, 1); 
    gtk_grid_attach(Grid, button17, 3, 5, 1, 1); 
    gtk_grid_attach(Grid, button18, 3, 6, 1, 1); 
    gtk_grid_attach(Grid, button19, 4, 1, 1, 1); 
    gtk_grid_attach(Grid, button20, 4, 2, 1, 1); 
    gtk_grid_attach(Grid, button21, 4, 3, 1, 1); 
    gtk_grid_attach(Grid, button22, 4, 4, 1, 1); 
    gtk_grid_attach(Grid, button23, 4, 5, 1, 1); 
    gtk_grid_attach(Grid, button24, 4, 6, 1, 1); 
    gtk_window_present(GTK_WINDOW(window));
    /*Attatch the buttons to the Grid and organize them accordingly.  Also, present the window and it's child. */
}

void friday()
{
    GtkWidget *window;
    GtkGrid *Grid;
    GtkWidget *button1;
    GtkWidget *button2; 
    GtkWidget *button3; 
    GtkWidget *button4; 
    GtkWidget *button5; 
    GtkWidget *button6; 
    GtkWidget *button7; 
    GtkWidget *button8; 
    GtkWidget *button9; 
    GtkWidget *button10; 
    GtkWidget *button11; 
    GtkWidget *button12; 
    GtkWidget *button13; 
    GtkWidget *button14; 
    GtkWidget *button15; 
    GtkWidget *button16; 
    GtkWidget *button17; 
    GtkWidget *button18; 
    GtkWidget *button19; 
    GtkWidget *button20; 
    GtkWidget *button21; 
    GtkWidget *button22; 
    GtkWidget *button23; 
    GtkWidget *button24; 
    /*These are all the widgets.  There are 24 buttons due to the 24 hours in a day.  */
    window = gtk_window_new();
    gtk_window_set_title(GTK_WINDOW(window), "Friday");
    Grid = gtk_grid_new(); 
    gtk_window_set_child(GTK_WINDOW(window), Grid);
    /*Construct the window and the grid as it's child.  */
    button1 = gtk_button_new_with_label("12AM");
    button2 = gtk_button_new_with_label("1AM");
    button3 = gtk_button_new_with_label("2AM");
    button4 = gtk_button_new_with_label("3AM");
    button5 = gtk_button_new_with_label("4AM");
    button6 = gtk_button_new_with_label("5AM");
    button7 = gtk_button_new_with_label("6AM");
    button8 = gtk_button_new_with_label("7AM");
    button9 = gtk_button_new_with_label("8AM");
    button10 = gtk_button_new_with_label("9AM");
    button11 = gtk_button_new_with_label("10AM");
    button12 = gtk_button_new_with_label("11AM");
    button13 = gtk_button_new_with_label("12PM");
    button14 = gtk_button_new_with_label("1PM");
    button15 = gtk_button_new_with_label("2PM");
    button16 = gtk_button_new_with_label("3PM");
    button17 = gtk_button_new_with_label("4PM");
    button18 = gtk_button_new_with_label("5PM");
    button19 = gtk_button_new_with_label("6PM");
    button20 = gtk_button_new_with_label("7PM");
    button21 = gtk_button_new_with_label("8PM");
    button22 = gtk_button_new_with_label("9PM");
    button23 = gtk_button_new_with_label("10PM");
    button24 = gtk_button_new_with_label("11PM");
    /*Create 24 buttons that list the hour*/
    g_signal_connect_swapped(button1, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button2, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button3, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button4, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button5, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button6, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button7, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button8, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button9, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button10, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button11, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button12, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button13, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button14, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button15, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button16, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button17, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button18, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button19, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button20, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button21, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button22, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button23, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button24, "clicked", G_CALLBACK(gtk_window_destroy), window);
    /*When any button is pressed, close the window
    This will change later on in the program, but it is easier to do it this way for now.  */
    gtk_grid_attach(Grid, button1, 1, 1, 1, 1); 
    gtk_grid_attach(Grid, button2, 1, 2, 1, 1); 
    gtk_grid_attach(Grid, button3, 1, 3, 1, 1); 
    gtk_grid_attach(Grid, button4, 1, 4, 1, 1); 
    gtk_grid_attach(Grid, button5, 1, 5, 1, 1); 
    gtk_grid_attach(Grid, button6, 1, 6, 1, 1); 
    gtk_grid_attach(Grid, button7, 2, 1, 1, 1); 
    gtk_grid_attach(Grid, button8, 2, 2, 1, 1); 
    gtk_grid_attach(Grid, button9, 2, 3, 1, 1); 
    gtk_grid_attach(Grid, button10, 2, 4, 1, 1); 
    gtk_grid_attach(Grid, button11, 2, 5, 1, 1); 
    gtk_grid_attach(Grid, button12, 2, 6, 1, 1); 
    gtk_grid_attach(Grid, button13, 3, 1, 1, 1); 
    gtk_grid_attach(Grid, button14, 3, 2, 1, 1); 
    gtk_grid_attach(Grid, button15, 3, 3, 1, 1); 
    gtk_grid_attach(Grid, button16, 3, 4, 1, 1); 
    gtk_grid_attach(Grid, button17, 3, 5, 1, 1); 
    gtk_grid_attach(Grid, button18, 3, 6, 1, 1); 
    gtk_grid_attach(Grid, button19, 4, 1, 1, 1); 
    gtk_grid_attach(Grid, button20, 4, 2, 1, 1); 
    gtk_grid_attach(Grid, button21, 4, 3, 1, 1); 
    gtk_grid_attach(Grid, button22, 4, 4, 1, 1); 
    gtk_grid_attach(Grid, button23, 4, 5, 1, 1); 
    gtk_grid_attach(Grid, button24, 4, 6, 1, 1); 
    gtk_window_present(GTK_WINDOW(window));
    /*Attatch the buttons to the Grid and organize them accordingly.  Also, present the window and it's child. */
}

void thursday()
{
    GtkWidget *window;
    GtkGrid *Grid;
    GtkWidget *button1;
    GtkWidget *button2; 
    GtkWidget *button3; 
    GtkWidget *button4; 
    GtkWidget *button5; 
    GtkWidget *button6; 
    GtkWidget *button7; 
    GtkWidget *button8; 
    GtkWidget *button9; 
    GtkWidget *button10; 
    GtkWidget *button11; 
    GtkWidget *button12; 
    GtkWidget *button13; 
    GtkWidget *button14; 
    GtkWidget *button15; 
    GtkWidget *button16; 
    GtkWidget *button17; 
    GtkWidget *button18; 
    GtkWidget *button19; 
    GtkWidget *button20; 
    GtkWidget *button21; 
    GtkWidget *button22; 
    GtkWidget *button23; 
    GtkWidget *button24; 
    /*These are all the widgets.  There are 24 buttons due to the 24 hours in a day.  */
    window = gtk_window_new();
    gtk_window_set_title(GTK_WINDOW(window), "Thursday");
    Grid = gtk_grid_new(); 
    gtk_window_set_child(GTK_WINDOW(window), Grid);
    /*Construct the window and the grid as it's child.  */
    button1 = gtk_button_new_with_label("12AM");
    button2 = gtk_button_new_with_label("1AM");
    button3 = gtk_button_new_with_label("2AM");
    button4 = gtk_button_new_with_label("3AM");
    button5 = gtk_button_new_with_label("4AM");
    button6 = gtk_button_new_with_label("5AM");
    button7 = gtk_button_new_with_label("6AM");
    button8 = gtk_button_new_with_label("7AM");
    button9 = gtk_button_new_with_label("8AM");
    button10 = gtk_button_new_with_label("9AM");
    button11 = gtk_button_new_with_label("10AM");
    button12 = gtk_button_new_with_label("11AM");
    button13 = gtk_button_new_with_label("12PM");
    button14 = gtk_button_new_with_label("1PM");
    button15 = gtk_button_new_with_label("2PM");
    button16 = gtk_button_new_with_label("3PM");
    button17 = gtk_button_new_with_label("4PM");
    button18 = gtk_button_new_with_label("5PM");
    button19 = gtk_button_new_with_label("6PM");
    button20 = gtk_button_new_with_label("7PM");
    button21 = gtk_button_new_with_label("8PM");
    button22 = gtk_button_new_with_label("9PM");
    button23 = gtk_button_new_with_label("10PM");
    button24 = gtk_button_new_with_label("11PM");
    /*Create 24 buttons that list the hour*/
    g_signal_connect_swapped(button1, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button2, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button3, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button4, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button5, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button6, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button7, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button8, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button9, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button10, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button11, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button12, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button13, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button14, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button15, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button16, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button17, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button18, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button19, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button20, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button21, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button22, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button23, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button24, "clicked", G_CALLBACK(gtk_window_destroy), window);
    /*When any button is pressed, close the window
    This will change later on in the program, but it is easier to do it this way for now.  */
    gtk_grid_attach(Grid, button1, 1, 1, 1, 1); 
    gtk_grid_attach(Grid, button2, 1, 2, 1, 1); 
    gtk_grid_attach(Grid, button3, 1, 3, 1, 1); 
    gtk_grid_attach(Grid, button4, 1, 4, 1, 1); 
    gtk_grid_attach(Grid, button5, 1, 5, 1, 1); 
    gtk_grid_attach(Grid, button6, 1, 6, 1, 1); 
    gtk_grid_attach(Grid, button7, 2, 1, 1, 1); 
    gtk_grid_attach(Grid, button8, 2, 2, 1, 1); 
    gtk_grid_attach(Grid, button9, 2, 3, 1, 1); 
    gtk_grid_attach(Grid, button10, 2, 4, 1, 1); 
    gtk_grid_attach(Grid, button11, 2, 5, 1, 1); 
    gtk_grid_attach(Grid, button12, 2, 6, 1, 1); 
    gtk_grid_attach(Grid, button13, 3, 1, 1, 1); 
    gtk_grid_attach(Grid, button14, 3, 2, 1, 1); 
    gtk_grid_attach(Grid, button15, 3, 3, 1, 1); 
    gtk_grid_attach(Grid, button16, 3, 4, 1, 1); 
    gtk_grid_attach(Grid, button17, 3, 5, 1, 1); 
    gtk_grid_attach(Grid, button18, 3, 6, 1, 1); 
    gtk_grid_attach(Grid, button19, 4, 1, 1, 1); 
    gtk_grid_attach(Grid, button20, 4, 2, 1, 1); 
    gtk_grid_attach(Grid, button21, 4, 3, 1, 1); 
    gtk_grid_attach(Grid, button22, 4, 4, 1, 1); 
    gtk_grid_attach(Grid, button23, 4, 5, 1, 1); 
    gtk_grid_attach(Grid, button24, 4, 6, 1, 1); 
    gtk_window_present(GTK_WINDOW(window));
    /*Attatch the buttons to the Grid and organize them accordingly.  Also, present the window and it's child. */
}

void wednesday()
{
    GtkWidget *window;
    GtkGrid *Grid;
    GtkWidget *button1;
    GtkWidget *button2; 
    GtkWidget *button3; 
    GtkWidget *button4; 
    GtkWidget *button5; 
    GtkWidget *button6; 
    GtkWidget *button7; 
    GtkWidget *button8; 
    GtkWidget *button9; 
    GtkWidget *button10; 
    GtkWidget *button11; 
    GtkWidget *button12; 
    GtkWidget *button13; 
    GtkWidget *button14; 
    GtkWidget *button15; 
    GtkWidget *button16; 
    GtkWidget *button17; 
    GtkWidget *button18; 
    GtkWidget *button19; 
    GtkWidget *button20; 
    GtkWidget *button21; 
    GtkWidget *button22; 
    GtkWidget *button23; 
    GtkWidget *button24; 
    /*These are all the widgets.  There are 24 buttons due to the 24 hours in a day.  */
    window = gtk_window_new();
    gtk_window_set_title(GTK_WINDOW(window), "Wednesday");
    Grid = gtk_grid_new(); 
    gtk_window_set_child(GTK_WINDOW(window), Grid);
    /*Construct the window and the grid as it's child.  */
    button1 = gtk_button_new_with_label("12AM");
    button2 = gtk_button_new_with_label("1AM");
    button3 = gtk_button_new_with_label("2AM");
    button4 = gtk_button_new_with_label("3AM");
    button5 = gtk_button_new_with_label("4AM");
    button6 = gtk_button_new_with_label("5AM");
    button7 = gtk_button_new_with_label("6AM");
    button8 = gtk_button_new_with_label("7AM");
    button9 = gtk_button_new_with_label("8AM");
    button10 = gtk_button_new_with_label("9AM");
    button11 = gtk_button_new_with_label("10AM");
    button12 = gtk_button_new_with_label("11AM");
    button13 = gtk_button_new_with_label("12PM");
    button14 = gtk_button_new_with_label("1PM");
    button15 = gtk_button_new_with_label("2PM");
    button16 = gtk_button_new_with_label("3PM");
    button17 = gtk_button_new_with_label("4PM");
    button18 = gtk_button_new_with_label("5PM");
    button19 = gtk_button_new_with_label("6PM");
    button20 = gtk_button_new_with_label("7PM");
    button21 = gtk_button_new_with_label("8PM");
    button22 = gtk_button_new_with_label("9PM");
    button23 = gtk_button_new_with_label("10PM");
    button24 = gtk_button_new_with_label("11PM");
    /*Create 24 buttons that list the hour*/
    g_signal_connect_swapped(button1, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button2, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button3, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button4, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button5, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button6, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button7, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button8, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button9, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button10, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button11, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button12, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button13, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button14, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button15, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button16, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button17, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button18, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button19, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button20, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button21, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button22, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button23, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button24, "clicked", G_CALLBACK(gtk_window_destroy), window);
    /*When any button is pressed, close the window
    This will change later on in the program, but it is easier to do it this way for now.  */
    gtk_grid_attach(Grid, button1, 1, 1, 1, 1); 
    gtk_grid_attach(Grid, button2, 1, 2, 1, 1); 
    gtk_grid_attach(Grid, button3, 1, 3, 1, 1); 
    gtk_grid_attach(Grid, button4, 1, 4, 1, 1); 
    gtk_grid_attach(Grid, button5, 1, 5, 1, 1); 
    gtk_grid_attach(Grid, button6, 1, 6, 1, 1); 
    gtk_grid_attach(Grid, button7, 2, 1, 1, 1); 
    gtk_grid_attach(Grid, button8, 2, 2, 1, 1); 
    gtk_grid_attach(Grid, button9, 2, 3, 1, 1); 
    gtk_grid_attach(Grid, button10, 2, 4, 1, 1); 
    gtk_grid_attach(Grid, button11, 2, 5, 1, 1); 
    gtk_grid_attach(Grid, button12, 2, 6, 1, 1); 
    gtk_grid_attach(Grid, button13, 3, 1, 1, 1); 
    gtk_grid_attach(Grid, button14, 3, 2, 1, 1); 
    gtk_grid_attach(Grid, button15, 3, 3, 1, 1); 
    gtk_grid_attach(Grid, button16, 3, 4, 1, 1); 
    gtk_grid_attach(Grid, button17, 3, 5, 1, 1); 
    gtk_grid_attach(Grid, button18, 3, 6, 1, 1); 
    gtk_grid_attach(Grid, button19, 4, 1, 1, 1); 
    gtk_grid_attach(Grid, button20, 4, 2, 1, 1); 
    gtk_grid_attach(Grid, button21, 4, 3, 1, 1); 
    gtk_grid_attach(Grid, button22, 4, 4, 1, 1); 
    gtk_grid_attach(Grid, button23, 4, 5, 1, 1); 
    gtk_grid_attach(Grid, button24, 4, 6, 1, 1); 
    gtk_window_present(GTK_WINDOW(window));
    /*Attatch the buttons to the Grid and organize them accordingly.  Also, present the window and it's child. */
}

void tuesday()
{
    GtkWidget *window;
    GtkGrid *Grid;
    GtkWidget *button1;
    GtkWidget *button2; 
    GtkWidget *button3; 
    GtkWidget *button4; 
    GtkWidget *button5; 
    GtkWidget *button6; 
    GtkWidget *button7; 
    GtkWidget *button8; 
    GtkWidget *button9; 
    GtkWidget *button10; 
    GtkWidget *button11; 
    GtkWidget *button12; 
    GtkWidget *button13; 
    GtkWidget *button14; 
    GtkWidget *button15; 
    GtkWidget *button16; 
    GtkWidget *button17; 
    GtkWidget *button18; 
    GtkWidget *button19; 
    GtkWidget *button20; 
    GtkWidget *button21; 
    GtkWidget *button22; 
    GtkWidget *button23; 
    GtkWidget *button24; 
    /*These are all the widgets.  There are 24 buttons due to the 24 hours in a day.  */
    window = gtk_window_new();
    gtk_window_set_title(GTK_WINDOW(window), "Tuesday");
    Grid = gtk_grid_new(); 
    gtk_window_set_child(GTK_WINDOW(window), Grid);
    /*Construct the window and the grid as it's child.  */
    button1 = gtk_button_new_with_label("12AM");
    button2 = gtk_button_new_with_label("1AM");
    button3 = gtk_button_new_with_label("2AM");
    button4 = gtk_button_new_with_label("3AM");
    button5 = gtk_button_new_with_label("4AM");
    button6 = gtk_button_new_with_label("5AM");
    button7 = gtk_button_new_with_label("6AM");
    button8 = gtk_button_new_with_label("7AM");
    button9 = gtk_button_new_with_label("8AM");
    button10 = gtk_button_new_with_label("9AM");
    button11 = gtk_button_new_with_label("10AM");
    button12 = gtk_button_new_with_label("11AM");
    button13 = gtk_button_new_with_label("12PM");
    button14 = gtk_button_new_with_label("1PM");
    button15 = gtk_button_new_with_label("2PM");
    button16 = gtk_button_new_with_label("3PM");
    button17 = gtk_button_new_with_label("4PM");
    button18 = gtk_button_new_with_label("5PM");
    button19 = gtk_button_new_with_label("6PM");
    button20 = gtk_button_new_with_label("7PM");
    button21 = gtk_button_new_with_label("8PM");
    button22 = gtk_button_new_with_label("9PM");
    button23 = gtk_button_new_with_label("10PM");
    button24 = gtk_button_new_with_label("11PM");
    /*Create 24 buttons that list the hour*/
    g_signal_connect_swapped(button1, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button2, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button3, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button4, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button5, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button6, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button7, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button8, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button9, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button10, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button11, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button12, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button13, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button14, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button15, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button16, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button17, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button18, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button19, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button20, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button21, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button22, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button23, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button24, "clicked", G_CALLBACK(gtk_window_destroy), window);
    /*When any button is pressed, close the window
    This will change later on in the program, but it is easier to do it this way for now.  */
    gtk_grid_attach(Grid, button1, 1, 1, 1, 1); 
    gtk_grid_attach(Grid, button2, 1, 2, 1, 1); 
    gtk_grid_attach(Grid, button3, 1, 3, 1, 1); 
    gtk_grid_attach(Grid, button4, 1, 4, 1, 1); 
    gtk_grid_attach(Grid, button5, 1, 5, 1, 1); 
    gtk_grid_attach(Grid, button6, 1, 6, 1, 1); 
    gtk_grid_attach(Grid, button7, 2, 1, 1, 1); 
    gtk_grid_attach(Grid, button8, 2, 2, 1, 1); 
    gtk_grid_attach(Grid, button9, 2, 3, 1, 1); 
    gtk_grid_attach(Grid, button10, 2, 4, 1, 1); 
    gtk_grid_attach(Grid, button11, 2, 5, 1, 1); 
    gtk_grid_attach(Grid, button12, 2, 6, 1, 1); 
    gtk_grid_attach(Grid, button13, 3, 1, 1, 1); 
    gtk_grid_attach(Grid, button14, 3, 2, 1, 1); 
    gtk_grid_attach(Grid, button15, 3, 3, 1, 1); 
    gtk_grid_attach(Grid, button16, 3, 4, 1, 1); 
    gtk_grid_attach(Grid, button17, 3, 5, 1, 1); 
    gtk_grid_attach(Grid, button18, 3, 6, 1, 1); 
    gtk_grid_attach(Grid, button19, 4, 1, 1, 1); 
    gtk_grid_attach(Grid, button20, 4, 2, 1, 1); 
    gtk_grid_attach(Grid, button21, 4, 3, 1, 1); 
    gtk_grid_attach(Grid, button22, 4, 4, 1, 1); 
    gtk_grid_attach(Grid, button23, 4, 5, 1, 1); 
    gtk_grid_attach(Grid, button24, 4, 6, 1, 1); 
    gtk_window_present(GTK_WINDOW(window));
    /*Attatch the buttons to the Grid and organize them accordingly.  Also, present the window and it's child. */
}

void monday()
{
    GtkWidget *window;
    GtkGrid *Grid;
    GtkWidget *button1;
    GtkWidget *button2; 
    GtkWidget *button3; 
    GtkWidget *button4; 
    GtkWidget *button5; 
    GtkWidget *button6; 
    GtkWidget *button7; 
    GtkWidget *button8; 
    GtkWidget *button9; 
    GtkWidget *button10; 
    GtkWidget *button11; 
    GtkWidget *button12; 
    GtkWidget *button13; 
    GtkWidget *button14; 
    GtkWidget *button15; 
    GtkWidget *button16; 
    GtkWidget *button17; 
    GtkWidget *button18; 
    GtkWidget *button19; 
    GtkWidget *button20; 
    GtkWidget *button21; 
    GtkWidget *button22; 
    GtkWidget *button23; 
    GtkWidget *button24; 
    /*These are all the widgets.  There are 24 buttons due to the 24 hours in a day.  */
    window = gtk_window_new();
    gtk_window_set_title(GTK_WINDOW(window), "Monday");
    Grid = gtk_grid_new(); 
    gtk_window_set_child(GTK_WINDOW(window), Grid);
    /*Construct the window and the grid as it's child.  */
    button1 = gtk_button_new_with_label("12AM");
    button2 = gtk_button_new_with_label("1AM");
    button3 = gtk_button_new_with_label("2AM");
    button4 = gtk_button_new_with_label("3AM");
    button5 = gtk_button_new_with_label("4AM");
    button6 = gtk_button_new_with_label("5AM");
    button7 = gtk_button_new_with_label("6AM");
    button8 = gtk_button_new_with_label("7AM");
    button9 = gtk_button_new_with_label("8AM");
    button10 = gtk_button_new_with_label("9AM");
    button11 = gtk_button_new_with_label("10AM");
    button12 = gtk_button_new_with_label("11AM");
    button13 = gtk_button_new_with_label("12PM");
    button14 = gtk_button_new_with_label("1PM");
    button15 = gtk_button_new_with_label("2PM");
    button16 = gtk_button_new_with_label("3PM");
    button17 = gtk_button_new_with_label("4PM");
    button18 = gtk_button_new_with_label("5PM");
    button19 = gtk_button_new_with_label("6PM");
    button20 = gtk_button_new_with_label("7PM");
    button21 = gtk_button_new_with_label("8PM");
    button22 = gtk_button_new_with_label("9PM");
    button23 = gtk_button_new_with_label("10PM");
    button24 = gtk_button_new_with_label("11PM");
    /*Create 24 buttons that list the hour*/
    g_signal_connect_swapped(button1, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button2, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button3, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button4, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button5, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button6, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button7, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button8, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button9, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button10, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button11, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button12, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button13, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button14, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button15, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button16, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button17, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button18, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button19, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button20, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button21, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button22, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button23, "clicked", G_CALLBACK(gtk_window_destroy), window);
    g_signal_connect_swapped(button24, "clicked", G_CALLBACK(gtk_window_destroy), window);
    /*When any button is pressed, close the window
    This will change later on in the program, but it is easier to do it this way for now.  */
    gtk_grid_attach(Grid, button1, 1, 1, 1, 1); 
    gtk_grid_attach(Grid, button2, 1, 2, 1, 1); 
    gtk_grid_attach(Grid, button3, 1, 3, 1, 1); 
    gtk_grid_attach(Grid, button4, 1, 4, 1, 1); 
    gtk_grid_attach(Grid, button5, 1, 5, 1, 1); 
    gtk_grid_attach(Grid, button6, 1, 6, 1, 1); 
    gtk_grid_attach(Grid, button7, 2, 1, 1, 1); 
    gtk_grid_attach(Grid, button8, 2, 2, 1, 1); 
    gtk_grid_attach(Grid, button9, 2, 3, 1, 1); 
    gtk_grid_attach(Grid, button10, 2, 4, 1, 1); 
    gtk_grid_attach(Grid, button11, 2, 5, 1, 1); 
    gtk_grid_attach(Grid, button12, 2, 6, 1, 1); 
    gtk_grid_attach(Grid, button13, 3, 1, 1, 1); 
    gtk_grid_attach(Grid, button14, 3, 2, 1, 1); 
    gtk_grid_attach(Grid, button15, 3, 3, 1, 1); 
    gtk_grid_attach(Grid, button16, 3, 4, 1, 1); 
    gtk_grid_attach(Grid, button17, 3, 5, 1, 1); 
    gtk_grid_attach(Grid, button18, 3, 6, 1, 1); 
    gtk_grid_attach(Grid, button19, 4, 1, 1, 1); 
    gtk_grid_attach(Grid, button20, 4, 2, 1, 1); 
    gtk_grid_attach(Grid, button21, 4, 3, 1, 1); 
    gtk_grid_attach(Grid, button22, 4, 4, 1, 1); 
    gtk_grid_attach(Grid, button23, 4, 5, 1, 1); 
    gtk_grid_attach(Grid, button24, 4, 6, 1, 1); 
    gtk_window_present(GTK_WINDOW(window));
    /*Attatch the buttons to the Grid and organize them accordingly.  Also, present the window and it's child. */
}

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
        monday();
        //Go to the Monday function to edit the Monday config stuff.  
    }
    if (index123 == 2)
    {
        tuesday(); 
        //Go to the Tuesday function to edit the Tuesday config stuff. 
    }
    if (index123 == 3)
    {
        wednesday(); 
        //Go to the Wednesday function to edit the Wednesday config stuff. 
    }
    if (index123 == 4)
    {
        thursday(); 
        //Go to the Thursday function to edit the Thursday config stuff. 
    }
    if (index123 == 5)
    {
        friday(); 
        //Go to the Friday function to edit the Friday config stuff. 
    }
    if (index123 == 6)
    {
        saturday(); 
        //Go to the Saturday function to edit the Saturday config stuff.  
    }
    if (index123 == 7)
    {
        sunday(); 
        //go to the Sunday function to edit the Sunday config stuff. 
    }
    
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