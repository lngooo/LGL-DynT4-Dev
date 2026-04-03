@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @StrCompress(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %2
  %8 = load i8*, i8** %2
  %9 = call i64 @strlen(i8* %8)
  %10 = trunc i64 %9 to i32
  store i32 %10, i32* %3
  store i32 0, i32* %4
  br label %12
12:
  %13 = load i32, i32* %4
  %14 = load i32, i32* %3
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %18, label %16
16:
  br label %71
18:
  store i32 1, i32* %5
  %21 = load i32, i32* %4
  %22 = mul nsw i32 %21, 2
  store i32 %22, i32* %6
  br label %23
23:
  %24 = load i32, i32* %4
  %25 = add nsw i32 %24, 1
  %26 = load i32, i32* %3
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %28, label %43
28:
  %29 = load i8*, i8** %2
  %30 = load i32, i32* %4
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = load i8*, i8** %2
  %36 = load i32, i32* %4
  %37 = add nsw i32 %36, 1
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %35, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = icmp eq i32 %34, %41
  br label %43
43:
  %44 = phi i1 [ false, %23 ], [ %42, %28 ]
  br i1 %44, label %45, label %53
45:
  %46 = load i32, i32* %5
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %5
  %48 = load i32, i32* %4
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %4
  %50 = load i32, i32* %5
  %51 = load i32, i32* %6
  %52 = add nsw i32 %51, %50
  store i32 %52, i32* %6
  br label %23
53:
  %54 = load i32, i32* %6
  %55 = icmp sgt i32 %54, -100
  br i1 %55, label %56, label %65
56:
  %57 = load i8*, i8** %2
  %58 = load i32, i32* %4
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i8, i8* %57, i64 %59
  %61 = load i8, i8* %60
  %62 = sext i8 %61 to i32
  %63 = load i32, i32* %5
  %64 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %62, i32 %63)
  br label %65
65:
  br label %68
68:
  %69 = load i32, i32* %4
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %4
  br label %12
71:
  %72 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
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
  call void @StrCompress(i8* %12)
  store i32 0, i32* %3
  br label %13
13:
  %14 = load i32, i32* %3
  ret i32 %14
}
