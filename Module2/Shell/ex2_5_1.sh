#!/bin/bash

a="Apple"
echo ${#a}

echo ${a:1:2}

from="le"
to="lllllleeeeee"
echo ${a/$from/$to}
