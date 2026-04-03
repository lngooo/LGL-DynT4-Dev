define dso_local i32 @SubStrFind(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %10 = load i8*, i8** %4
  store i8* %10, i8** %6
  %12 = load i8*, i8** %5
  %13 = call i64 @strlen(i8* %12)
  %14 = trunc i64 %13 to i32
  store i32 %14, i32* %7
  %15 = load i32, i32* %7
  %16 = icmp eq i32 %15, 0
  br i1 %16, label %17, label %18
17:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %43
18:
  br label %19
19:
  %20 = load i8*, i8** %6
  %21 = load i8, i8* %20
  %22 = icmp ne i8 %21, 0
  br i1 %22, label %24, label %23
23:
  br label %42
24:
  %25 = load i8*, i8** %6
  %26 = load i8*, i8** %5
  %27 = load i32, i32* %7
  %28 = sext i32 %27 to i64
  %29 = call i32 @strncmp(i8* %25, i8* %26, i64 %28)
  %30 = icmp eq i32 %29, 0
  br i1 %30, label %31, label %32
31:
  br label %35
32:
  %33 = load i8*, i8** %6
  %34 = getelementptr inbounds i8, i8* %33, i32 1
  store i8* %34, i8** %6
  br label %19
35:
  %36 = load i8*, i8** %6
  %37 = load i8*, i8** %4
  %38 = ptrtoint i8* %36 to i64
  %39 = ptrtoint i8* %37 to i64
  %40 = sub i64 %38, %39
  %41 = trunc i64 %40 to i32
  store i32 %41, i32* %3
  store i32 1, i32* %8
  br label %43
42:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %43
43:
  %46 = load i32, i32* %3
  ret i32 %46
}
declare i64 @strlen(i8*)
declare i32 @strncmp(i8*, i8*, i64)
