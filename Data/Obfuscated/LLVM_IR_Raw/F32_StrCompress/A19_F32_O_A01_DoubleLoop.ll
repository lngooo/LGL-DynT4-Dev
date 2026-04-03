@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @RNL(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i8
  store i8* %0, i8** %2
  %9 = load i8*, i8** %2
  %10 = call i64 @strlen(i8* %9)
  %11 = trunc i64 %10 to i32
  store i32 %11, i32* %3
  store i32 0, i32* %4
  br label %13
13:
  %14 = load i32, i32* %4
  %15 = load i32, i32* %3
  %16 = icmp slt i32 %14, %15
  br i1 %16, label %19, label %17
17:
  br label %58
19:
  store i32 0, i32* %6
  %22 = load i8*, i8** %2
  %23 = load i32, i32* %4
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  store i8 %26, i8* %7
  %27 = load i32, i32* %4
  store i32 %27, i32* %5
  br label %28
28:
  %29 = load i32, i32* %5
  %30 = load i32, i32* %3
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %32, label %42
32:
  %33 = load i8*, i8** %2
  %34 = load i32, i32* %5
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %33, i64 %35
  %37 = load i8, i8* %36
  %38 = sext i8 %37 to i32
  %39 = load i8, i8* %7
  %40 = sext i8 %39 to i32
  %41 = icmp eq i32 %38, %40
  br label %42
42:
  %43 = phi i1 [ false, %28 ], [ %41, %32 ]
  br i1 %43, label %44, label %50
44:
  %45 = load i32, i32* %6
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %6
  br label %47
47:
  %48 = load i32, i32* %5
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %5
  br label %28
50:
  %51 = load i8, i8* %7
  %52 = sext i8 %51 to i32
  %53 = load i32, i32* %6
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %52, i32 %53)
  %55 = load i32, i32* %5
  store i32 %55, i32* %4
  br label %13
58:
  %59 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  ret void
}
declare i64 @strlen(i8*)
declare i32 @printf(i8*, ...)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %13
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  call void @RNL(i8* %12)
  store i32 0, i32* %3
  br label %13
13:
  %14 = load i32, i32* %3
  ret i32 %14
}
