#include <stdio.h>
#include <sys/stat.h>
#include <argp.h>
#include <gtk/gtk.h>
#include "../API/include.h"

void onFrankenlogosClicked() {
struct stat st = {0};

if (stat("AppContent/Logo/Frankenlogos", &st) == -1) {
    mkdir("AppContent/Logo/Frankenlogos", 0700);
}

 frankenlogos();
}

void onColoredNoLogoClicked() {
struct stat st = {0};

if (stat("AppContent/Logo/ColoredNoLogo", &st) == -1) {
    mkdir("AppContent/Logo/ColoredNoLogo", 0700);
}

 colored_nologo(); 
}

void onAllClicked() {
struct stat st = {0};

if (stat("AppContent/Logo/All", &st) == -1) {
    mkdir("AppContent/Logo/All", 0700);
}

 all_imgs();
}

void onOutlinedNoLogoClicked() {
struct stat st = {0};

if (stat("AppContent/Logo/OutlinedNoLogo", &st) == -1) {
    mkdir("AppContent/Logo/OutlinedNoLogo", 0700);
}

 outlined_nologo();
}

void onOutlinedAllClicked() {
struct stat st = {0};

if (stat("AppContent/Logo/OutlinedAll", &st) == -1) {
    mkdir("AppContent/Logo/OutlinedAll", 0700);
}

 outlined_all();
}

void onAllColorsClicked() {
struct stat st = {0};

if (stat("AppContent/Logo/AllColors", &st) == -1) {
    mkdir("AppContent/Logo/AllColors", 0700);
}

 colored_all();
}

const char *argp_program_version = "Christoffen Assets";
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

if (stat("AppContent", &st) == -1) {
    mkdir("AppContent", 0700);
}

if (stat("AppContent/Logo", &st) == -1) {
    mkdir("AppContent/Logo", 0700);
}

if (argc == 1) {
    GtkBuilder      *builder; 
    GtkWidget       *window;
 
    gtk_init(&argc, &argv);
 
    builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "../src/API/UI/MainWindow.ui", NULL);
 
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
 
