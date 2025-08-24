# Validate Trust If not (If Trush Permission show Greay) #
*.........................................................*

⸻

**🔹 Why This Is Needed**
	•	When you open a digitally signed PDF, your Mac needs to know if the signing certificate is trusted.
	•	By default, if the signer’s certificate is not in your Keychain (macOS trust store), Preview/Adobe shows it as “Signature not validated”.
	•	Solution: Import the certificate → set it as trusted.

⸻

` 🔹 Step-by-Step Explanation :`
*..............................*
1.` Export Certificate from the Signed PDF`
	•	Open the PDF → check the signature panel (in Preview or Acrobat).
	•	Find the signer’s certificate.
	•	Export it as .cer or .crt file.

⸻

2. `Open Keychain Access`
	•	On macOS, press Cmd + Space → type “Keychain Access” → Enter.
	•	Or: Applications → Utilities → Keychain Access.

⸻

3. `Import the Certificate`
	•	In Keychain Access, go to:
	•	Preferences (Cmd + ,) → choose Certificates.
	•	Or directly under System Keychain → Certificates.
	•	Click File → Import Items….
	•	Select the exported .cer / .crt file.

⸻

4. `Set Trust Settings`
	•	Double-click the certificate you imported.
	•	Expand Trust.
	•	Change settings to:
	•	When using this certificate → Always Trust.
	•	Or specifically check:
	•	“Use this certificate as a trusted root”
	•	“Trust for verifying digital signatures”
	•	Close the window → it will ask for your macOS password.

⸻

5. `Verify`
	•	Reopen the signed PDF.
	•	Now, Preview / Acrobat will see the signer’s certificate as trusted.
	•	The signature should show green check / Valid Signature instead of invalid. ✅

⸻

🔹 `Summary`
	•	Before: macOS doesn’t know the signer → shows ⚠️ not valid.
	•	After: you import their certificate into Keychain → tell macOS to trust it → signature validates.

⸻

 # Step 4 : Clearly :
 *...................*
 Yes 👍 exactly — when you import the .cer file into Keychain Access, it will appear in your list of certificates.

Here’s what happens step by step:

⸻

`🔹 Step after importing .cer file:`

1.	`Open Keychain Access`
	•	Press Cmd + Space → “Keychain Access” → Enter.
	•	In the left panel, select System (or Login, depending on where you imported).
	•	Under Category → Certificates, you’ll see the certificate you just imported.

⸻

`2.	Double-click the certificate`
	•	It will open a window showing details like:
	•	Issuer
	•	Expiration date
	•	Fingerprints

⸻

3.	`Expand the “Trust” section`
	•	There’s a small triangle next to Trust → click it.
	•	You’ll see drop-downs for:
	•	“When using this certificate”
	•	“Secure Sockets Layer (SSL)”
	•	“Code Signing”
	•	“X.509 Basic Policy”
	•	By default, these are set to Use System Defaults.

⸻

4.	`Set to Always Trust`
	•	From the dropdown: When using this certificate → Always Trust.
	•	Or specifically change “Code Signing” → Always Trust (for verifying signatures).

⸻

5.	`Save changes`
	•	Close the window → macOS will prompt for your admin password.
	•	Enter password → trust setting is applied.

⸻

6.	`Reopen your signed PDF`
	•	Now the certificate is trusted.
	•	Preview / Acrobat should show ✅ “Valid signature”.

⸻

⚡ So yes:
	•	The .cer file is the certificate file.
	•	After importing it into Keychain, double-click it there (not just in Finder).