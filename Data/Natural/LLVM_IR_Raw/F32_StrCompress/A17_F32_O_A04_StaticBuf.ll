@g_buf = internal global [2048 x i8] zeroinitializer
@.str = constant [5 x i8] c"%c%d\00"
define dso_local void @StrCompress(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %2
  %9 = load i8*, i8** %2
  %10 = call i64 @strlen(i8* %9)
  %11 = trunc i64 %10 to i32
  store i32 %11, i32* %3
  store i32 1, i32* %4
  store i32 0, i32* %5
  %14 = load i32, i32* %3
  %15 = icmp eq i32 %14, 0
  br i1 %15, label %16, label %17
16:
  store i32 1, i32* %6
  br label %71
17:
  store i32 0, i32* %7
  br label %19
19:
  %20 = load i32, i32* %7
  %21 = load i32, i32* %3
  %22 = icmp slt i32 %20, %21
  br i1 %22, label %25, label %23
23:
  store i32 2, i32* %6
  br label %66
25:
  %26 = load i32, i32* %7
  %27 = add nsw i32 %26, 1
  %28 = load i32, i32* %3
  %29 = icmp slt i32 %27, %28
  br i1 %29, label %30, label %48
30:
  %31 = load i8*, i8** %2
  %32 = load i32, i32* %7
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = load i8*, i8** %2
  %38 = load i32, i32* %7
  %39 = add nsw i32 %38, 1
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %37, i64 %40
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = icmp eq i32 %36, %43
  br i1 %44, label %45, label %48
45:
  %46 = load i32, i32* %4
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %4
  br label %62
48:
  %49 = load i32, i32* %5
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i8, i8* getelementptr inbounds ([2048 x i8], [2048 x i8]* @g_buf, i64 0, i64 0), i64 %50
  %52 = load i8*, i8** %2
  %53 = load i32, i32* %7
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i8, i8* %52, i64 %54
  %56 = load i8, i8* %55
  %57 = sext i8 %56 to i32
  %58 = load i32, i32* %4
  %59 = call i32 (i8*, i8*, ...) @sprintf(i8* %51, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %57, i32 %58)
  %60 = load i32, i32* %5
  %61 = add nsw i32 %60, %59
  store i32 %61, i32* %5
  store i32 1, i32* %4
  br label %62
62:
  br label %63
63:
  %64 = load i32, i32* %7
  %65 = add nsw i32 %64, 1
  store i32 %65, i32* %7
  br label %19
66:
  %67 = load i32, i32* %5
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds [2048 x i8], [2048 x i8]* @g_buf, i64 0, i64 %68
  store i8 0, i8* %69
  %70 = call i32 @puts(i8* getelementptr inbounds ([2048 x i8], [2048 x i8]* @g_buf, i64 0, i64 0))
  store i32 0, i32* %6
  br label %71
71:
  %75 = load i32, i32* %6
  switch i32 %75, label %77 [
    i32 0, label %76
    i32 1, label %76
  ]
76:
  ret void
77:
  unreachable
}
declare i64 @strlen(i8*)
declare i32 @sprintf(i8*, i8*, ...)
declare i32 @puts(i8*)
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
  call void @StrCompress(i8* %12)
  store i32 0, i32* %3
  br label %13
13:
  %14 = load i32, i32* %3
  ret i32 %14
}
