define dso_local i32 @kYRR(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i8**
  %7 = alloca i8**
  store i32 %0, i32* %2
  store i8* %10, i8** %4
  store i8* %12, i8** %5
  store i8** %4, i8*** %6
  store i8** %5, i8*** %7
  %15 = load i8**, i8*** %6
  %16 = load i8*, i8** %15
  %17 = getelementptr inbounds i8, i8* %16, i64 3
  %18 = load i8, i8* %17
  %19 = load i8**, i8*** %7
  %20 = load i8*, i8** %19
  %21 = getelementptr inbounds i8, i8* %20, i64 0
  store i8 %18, i8* %21
  %22 = load i8**, i8*** %6
  %23 = load i8*, i8** %22
  %24 = getelementptr inbounds i8, i8* %23, i64 2
  %25 = load i8, i8* %24
  %26 = load i8**, i8*** %7
  %27 = load i8*, i8** %26
  %28 = getelementptr inbounds i8, i8* %27, i64 1
  store i8 %25, i8* %28
  %29 = load i8**, i8*** %6
  %30 = load i8*, i8** %29
  %31 = getelementptr inbounds i8, i8* %30, i64 1
  %32 = load i8, i8* %31
  %33 = load i8**, i8*** %7
  %34 = load i8*, i8** %33
  %35 = getelementptr inbounds i8, i8* %34, i64 2
  store i8 %32, i8* %35
  %36 = load i8**, i8*** %6
  %37 = load i8*, i8** %36
  %38 = getelementptr inbounds i8, i8* %37, i64 0
  %39 = load i8, i8* %38
  %40 = load i8**, i8*** %7
  %41 = load i8*, i8** %40
  %42 = getelementptr inbounds i8, i8* %41, i64 3
  store i8 %39, i8* %42
  %43 = load i32, i32* %3
  ret i32 %43
}
