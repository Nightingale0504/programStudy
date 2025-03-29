@echo off
cd C:\MyDocuments\programStudy
git pull
git rm -r --cached .
git add .
git commit -m "Update"
git push