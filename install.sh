# Install hooks
echo -n "Installing hooks..."
ln -f -s ../../scripts/hooks/pre-commit.sh .git/hooks/pre-commit
echo "Finished installing hooks"