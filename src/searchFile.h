#ifndef SEARCH_FILE_H
#define SEARCH_FILE_H

#include <gtkmm.h>
#include <vector>
#include <string>

Glib::RefPtr<Gtk::Builder> createGlade();
Glib::RefPtr<Gtk::Builder> createGlade(const Glib::ustring &object_id);

// public search functions
const std::string searchGladeFile(const std::string &glade_file);
const std::string searchPixmapFile(std::string pixmap_file);
const std::string searchDataDir();

const std::string searchFile(std::vector <std::string> &name_vector);


#endif // SEARCH_FILE_H
