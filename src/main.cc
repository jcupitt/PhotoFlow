/* 
 */

/*

    Copyright (C) 2014 Ferrero Andrea

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.


 */

/*

    These files are distributed with PhotoFlow - http://aferrero2707.github.io/PhotoFlow/

 */

#include <gtkmm/main.h>
#include <vips/vips>
#include <vips/vips.h>
#include "gui/mainwindow.hh"


/* We need C linkage for this.
 */
#ifdef __cplusplus
extern "C" {
#endif /*__cplusplus*/

  extern GType vips_layer_get_type( void ); 

#ifdef __cplusplus
}
#endif /*__cplusplus*/

int main (int argc, char *argv[])
{
  Gtk::Main kit(argc, argv);

  if (argc != 2)
    error_exit ("usage: %s <filename>", argv[0]);
  if (vips_init (argv[0]))
    verror ();

  vips_layer_get_type();

  //im_concurrency_set( 1 );

  //im_package* result = im_load_plugin("src/pfvips.plg");
  //if(!result) verror ();
  //std::cout<<result->name<<" loaded."<<std::endl;
  

  PF::MainWindow mainWindow( argv[1] );
  //Shows the window and returns when it is closed.
  Gtk::Main::run(mainWindow);

  im_close_plugins();

  return 0;
}

