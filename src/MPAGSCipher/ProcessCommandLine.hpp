#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>

/**
 * \file ProcessCommandLine.hpp
 * \brief Contains the declaration of the function for processing the command-line arguments
 */

/** 
 * \brief Structure to hold the program settings
 * 
 * It contains flags for help and version requests, input/output file names,
 * cipher key, and whether to encrypt or decrypt.
 * 
 */
struct ProgramSettings {
    /// Help requested flag
    bool helpRequested{false};
    /// Version requested flag
    bool versionRequested{false};
    /// Input file name
    std::string inputFile{""};
    /// Output file name
    std::string outputFile{""};
    /// Cipher key
    std::string cipherKey{""};
    /// Encrypt flag
    bool encrypt{true};
};

/**
 * \brief Processes the command-line arguments and modifies accordingly the program settings
 *
 * \param cmdLineArgs The command-line arguments to be processed
 * \param settings The program settings to be modified based on the command-line arguments
 */
bool processCommandLine(const std::vector<std::string>& cmdLineArgs,
                        ProgramSettings& settings);
#endif    // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
