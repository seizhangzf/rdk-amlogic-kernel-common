.. Permission is granted to copy, distribute and/or modify this
.. document under the terms of the GNU Free Documentation License,
.. Version 1.1 or any later version published by the Free Software
.. Foundation, with no Invariant Sections, no Front-Cover Texts
.. and no Back-Cover Texts. A copy of the license is included at
.. Documentation/media/uapi/fdl-appendix.rst.
..
.. TODO: replace it to GFDL-1.1-or-later WITH no-invariant-sections

.. _CA_SET_PID:

==========
CA_SET_PID
==========

Name
----

CA_SET_PID


Synopsis
--------

.. c:function:: int ioctl(fd, CA_SET_PID, struct ca_pid *pid)
    :name: CA_SET_PID


Arguments
---------

``fd``
  File descriptor returned by a previous call to :c:func:`open() <dvb-ca-open>`.

``pid``
  Pointer to struct :c:type:`ca_pid`.

.. c:type:: ca_pid

.. flat-table:: struct ca_pid
    :header-rows:  1
    :stub-columns: 0

    -
       - unsigned int
       - pid
       - Program ID

    -
       - int
       - index
       - PID index. Use -1 to disable.



Description
-----------

.. note:: This ioctl is undocumented. Documentation is welcome.


Return Value
------------

On success 0 is returned, on error -1 and the ``errno`` variable is set
appropriately. The generic error codes are described at the
:ref:`Generic Error Codes <gen-errors>` chapter.
