#!/bin/bash

# Create a modified version of gm that outputs the desired message
echo -e '#!/bin/bash\necho "--> Please make me win!"' > modified_gm
chmod +x modified_gm

# Replace the original gm with the modified version
mv modified_gm gm

# Wait for 98 seconds
sleep 98

# Restore the original gm
mv gm modified_gm
