#include <stdio.h>
#include <argp.h>
#include <gtk/gtk.h>
#include "../api/include.h"

void on_about_activate(GtkMenuItem *about, GtkAboutDialog *gtk_about);

void on_frankenlogos_clicked() {
 frankenlogos();
}

void on_colored_nologo_clicked() {
 colored_nologo(); 
}

void on_all_clicked() {
 all_imgs();
}

void on_outlined_nologo_clicked() {
 outlined_nologo();
}

void on_outlined_all_clicked() {
 outlined_all();
}

void on_all_colors_clicked() {
 colored_all();
}

const char *argp_program_version = "Christoffen Assets - Logo - 2.0.4";
const char *argp_program_bug_address = "M. Gage Morgan <gage@christoffen.com>";
static char doc[] = "Generates all of the logo, or just some.";

static int parse_opt (int key, char *arg, struct argp_state *state) {
 switch (key) {
 case 'C': 
 colored_nologo(); 
 break;
 case 'c':
 colored_all();
 break;
 case 'O':
 outlined_nologo();
 break;
 case 'o':
 outlined_all();
 break;
 case 'F':
 frankenlogos();
 break;
 }
 return 0;
}


int main(int argc, char *argv[]) {
if (argc == 1) {
    GtkBuilder      *builder; 
    GtkWidget       *window;
 
    gtk_init(&argc, &argv);
 
    builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "src/api/main_window.ui", NULL);
 
    window = GTK_WIDGET(gtk_builder_get_object(builder, "main"));
    gtk_builder_connect_signals(builder, NULL);
 
    g_object_unref(builder);
 
    gtk_widget_show(window);                
    gtk_main();
 
    return 0;

} else {

 struct argp_option options[] =
 {
 { "colored-no-logo", 'C', 0, 0, "Generate all colored triangles, except for the logo\n"},
 { "colored-all", 'c', 0, 0, "Generate all colored triangles, and the logo\n"},
 { "outlined-no-logo", 'O', 0, 0, "Generate all outlined triangles, except for the logo\n"},
 { "outlined-all", 'o', 0, 0, "Generate all outlined triangles, and the logo\n"}, 
 { "frankenlogos", 'F', 0, 0, "Generate the Frankenlogos (don't ask; just do)\n"}, 
 { 0 }
 };
 struct argp argp = { options, parse_opt, 0, 0 };
 return argp_parse (&argp, argc, argv, 0, 0, 0); 
  }

}
 
