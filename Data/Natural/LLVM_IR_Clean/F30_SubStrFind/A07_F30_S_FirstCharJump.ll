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
  br label %45
18:
  br label %19
19:
  %20 = load i8*, i8** %6
  %21 = load i8*, i8** %5
  %22 = getelementptr inbounds i8, i8* %21, i64 0
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = call i8* @strchr(i8* %20, i32 %24)
  store i8* %25, i8** %6
  %26 = icmp ne i8* %25, null
  br i1 %26, label %27, label %44
27:
  %28 = load i8*, i8** %6
  %29 = load i8*, i8** %5
  %30 = load i32, i32* %7
  %31 = sext i32 %30 to i64
  %32 = call i32 @strncmp(i8* %28, i8* %29, i64 %31)
  %33 = icmp eq i32 %32, 0
  br i1 %33, label %34, label %41
34:
  %35 = load i8*, i8** %6
  %36 = load i8*, i8** %4
  %37 = ptrtoint i8* %35 to i64
  %38 = ptrtoint i8* %36 to i64
  %39 = sub i64 %37, %38
  %40 = trunc i64 %39 to i32
  store i32 %40, i32* %3
  store i32 1, i32* %8
  br label %45
41:
  %42 = load i8*, i8** %6
  %43 = getelementptr inbounds i8, i8* %42, i32 1
  store i8* %43, i8** %6
  br label %19
44:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %45
45:
  %48 = load i32, i32* %3
  ret i32 %48
}
declare i64 @strlen(i8*)
declare i8* @strchr(i8*, i32)
declare i32 @strncmp(i8*, i8*, i64)
