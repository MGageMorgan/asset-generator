#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <argp.h>
#include <gtk/gtk.h>
#include "../API/include.h"

void on_frankenlogos_clicked() {
struct stat st = {0};

if (stat("assets/logo/frankenlogos", &st) == -1) {
    mkdir("assets/logo/frankenlogos", 0700);
}

 frankenlogos();
}

void on_colored_nologo_clicked() {
struct stat st = {0};

if (stat("assets/logo/colored-no-logo", &st) == -1) {
    mkdir("assets/logo/colored-no-logo", 0700);
}

 colored_nologo(); 
}

void on_all_clicked() {
struct stat st = {0};

if (stat("assets/logo/all", &st) == -1) {
    mkdir("assets/logo/all", 0700);
}

 all_imgs();
}

void on_outlined_nologo_clicked() {
struct stat st = {0};

if (stat("assets/logo/outlined-no-logo", &st) == -1) {
    mkdir("assets/logo/outlined-no-logo", 0700);
}

 outlined_nologo();
}

void on_outlined_all_clicked() {
struct stat st = {0};

if (stat("assets/logo/outlined-all", &st) == -1) {
    mkdir("assets/logo/outlined-all", 0700);
}

 outlined_all();
}

void on_all_colors_clicked() {
struct stat st = {0};

if (stat("assets/logo/all-colors", &st) == -1) {
    mkdir("assets/logo/all-colors", 0700);
}

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
struct stat st = {0};

if (stat("assets", &st) == -1) {
    mkdir("assets", 0700);
}

if (stat("assets/logo", &st) == -1) {
    mkdir("assets/logo", 0700);
}

if (argc == 1) {
    GtkBuilder      *builder; 
    GtkWidget       *window;
 
    gtk_init(&argc, &argv);
 
    builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "../src/API/main_window.ui", NULL);
 
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
 
