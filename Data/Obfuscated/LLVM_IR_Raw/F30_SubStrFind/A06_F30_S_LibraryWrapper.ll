@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @tk(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i8*
  %7 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %8 = load i8*, i8** %5
  %9 = call i64 @strlen(i8* %8)
  %10 = icmp eq i64 %9, 0
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %29
12:
  %14 = load i8*, i8** %4
  %15 = load i8*, i8** %5
  %16 = call i8* @strstr(i8* %14, i8* %15)
  store i8* %16, i8** %6
  %17 = load i8*, i8** %6
  %18 = icmp ne i8* %17, null
  br i1 %18, label %19, label %26
19:
  %20 = load i8*, i8** %6
  %21 = load i8*, i8** %4
  %22 = ptrtoint i8* %20 to i64
  %23 = ptrtoint i8* %21 to i64
  %24 = sub i64 %22, %23
  %25 = trunc i64 %24 to i32
  store i32 %25, i32* %3
  store i32 1, i32* %7
  br label %27
26:
  store i32 -1, i32* %3
  store i32 1, i32* %7
  br label %27
27:
  br label %29
29:
  %30 = load i32, i32* %3
  ret i32 %30
}
declare i64 @strlen(i8*)
declare i8* @strstr(i8*, i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %18
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = call i32 @tk(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
