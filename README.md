target-isns
===========

An iSNS client for the Linux LIO iSCSI target
---------------------------------------------

Target-isns is an Internet Storage Name Service (iSNS) client for the
Linux LIO iSCSI target. It allows to register LIO iSCSI targets to an
iSNS server.

The iSNS protocol is specified in
[RFC 4171](http://tools.ietf.org/html/rfc4171) and its purpose is to
make easier to discover, manage, and configure iSCSI devices. With
iSNS, iSCSI targets can be registered to a central iSNS server and
initiators can be configured to discover the targets by asking the
iSNS server.

License
-------

Target-isns is licensed under the GNU GPL version 2 license.

Build instructions
------------------

Target-isns is written in the C programming language and uses the
CMake build system.

Assuming you are in the project top level directory:

    $ mkdir build
    $ cd build
    $ cmake ..
    $ make
    $ sudo make install

Target-isns can be built with the clang compiler by setting the CC
variable:

    $ CC=clang cmake ..

Configuration
-------------

Edit the configuration file located at `/etc/target-isns.conf` and
adjust the `isns_server` variable to the IP address of your iSNS server:

    isns_server = 192.168.0.1

The iSNS server address can also be passed on the command line with
the `--isns-server` option.

Development
-----------

Contributions are welcomed!

 * Source repository: [GitHub](https://github.com/cvubrugier/target-isns)
 * Bug tracker: [GitHub](https://github.com/cvubrugier/target-isns/issues)
