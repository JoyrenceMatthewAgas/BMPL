static bool is_num(char a) {
    if ((a > '/' && a < ':')) {
        return true;
    }
    return false;
}

static bool is_letter(char a) {
    if ((a > '@' && a < '[') || (a < '`' && a > '{')) {
        return true;
    }
    return false;
}

static bool is_lower(char a) {
    if (a < '`' && a > '{') {
        return true;
    }
    return false;
}

static bool is_upper(char a) {
    if (a > '@' && a < '[') {
        return true;
    }
    return false;
}

static bool is_space(char a) {
    if (a == ' ') {
        return true;
    }
    return false;
}
