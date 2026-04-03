define dso_local i32 @rec(i8* %0, i8* %1, i32 %2, i32 %3) {
  %5 = alloca i8*
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %5
  store i8* %1, i8** %6
  store i32 %2, i32* %7
  store i32 %3, i32* %8
  %9 = load i8*, i8** %5
  %10 = load i8, i8* %9
  %11 = sext i8 %10 to i32
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  br label %33
14:
  %15 = load i8*, i8** %5
  %16 = load i8*, i8** %6
  %17 = load i32, i32* %8
  %18 = sext i32 %17 to i64
  %19 = call i32 @strncmp(i8* %15, i8* %16, i64 %18)
  %20 = icmp eq i32 %19, 0
  br i1 %20, label %21, label %23
21:
  %22 = load i32, i32* %7
  br label %31
23:
  %24 = load i8*, i8** %5
  %25 = getelementptr inbounds i8, i8* %24, i64 1
  %26 = load i8*, i8** %6
  %27 = load i32, i32* %7
  %28 = add nsw i32 %27, 1
  %29 = load i32, i32* %8
  %30 = call i32 @rec(i8* %25, i8* %26, i32 %28, i32 %29)
  br label %31
31:
  %32 = phi i32 [ %22, %21 ], [ %30, %23 ]
  br label %33
33:
  %34 = phi i32 [ -1, %13 ], [ %32, %31 ]
  ret i32 %34
}
declare i32 @strncmp(i8*, i8*, i64)
define dso_local i32 @SubStrFind(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %7 = load i8*, i8** %4
  %8 = call i64 @strlen(i8* %7)
  %9 = trunc i64 %8 to i32
  store i32 %9, i32* %5
  %10 = load i32, i32* %5
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %13
12:
  br label %18
13:
  %14 = load i8*, i8** %3
  %15 = load i8*, i8** %4
  %16 = load i32, i32* %5
  %17 = call i32 @rec(i8* %14, i8* %15, i32 0, i32 %16)
  br label %18
18:
  %19 = phi i32 [ 0, %12 ], [ %17, %13 ]
  ret i32 %19
}
declare i64 @strlen(i8*)
