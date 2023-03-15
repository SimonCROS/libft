unsigned hashcode(HashMap* this, char* key) {
    unsigned code;
    for (code = 0; *key != '\0'; key++) {
        code = *key + 31 * code;
    }
    return code % (this->cap);
}
