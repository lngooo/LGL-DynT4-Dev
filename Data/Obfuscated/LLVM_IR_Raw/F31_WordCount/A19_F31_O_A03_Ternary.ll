@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @M3(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i32, i32* %4
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds i8, i8* %8, i64 %10
  %12 = load i8, i8* %11
  %13 = icmp ne i8 %12, 0
  br i1 %13, label %16, label %14
14:
  br label %67
16:
  %17 = call i16** @__ctype_b_loc()
  %18 = load i16*, i16** %17
  %19 = load i8*, i8** %2
  %20 = load i32, i32* %4
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i16, i16* %18, i64 %25
  %27 = load i16, i16* %26
  %28 = zext i16 %27 to i32
  %29 = and i32 %28, 8192
  %30 = icmp ne i32 %29, 0
  br i1 %30, label %58, label %31
31:
  %32 = call i16** @__ctype_b_loc()
  %33 = load i16*, i16** %32
  %34 = load i8*, i8** %2
  %35 = load i32, i32* %4
  %36 = add nsw i32 %35, 1
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %34, i64 %37
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i16, i16* %33, i64 %41
  %43 = load i16, i16* %42
  %44 = zext i16 %43 to i32
  %45 = and i32 %44, 8192
  %46 = icmp ne i32 %45, 0
  br i1 %46, label %56, label %47
47:
  %48 = load i8*, i8** %2
  %49 = load i32, i32* %4
  %50 = add nsw i32 %49, 1
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %48, i64 %51
  %53 = load i8, i8* %52
  %54 = sext i8 %53 to i32
  %55 = icmp eq i32 %54, 0
  br label %56
56:
  %57 = phi i1 [ true, %31 ], [ %55, %47 ]
  br label %58
58:
  %59 = phi i1 [ false, %16 ], [ %57, %56 ]
  %60 = zext i1 %59 to i64
  %61 = select i1 %59, i32 1, i32 0
  %62 = load i32, i32* %3
  %63 = add nsw i32 %62, %61
  store i32 %63, i32* %3
  br label %64
64:
  %65 = load i32, i32* %4
  %66 = add nsw i32 %65, 1
  store i32 %66, i32* %4
  br label %7
67:
  %68 = load i32, i32* %3
  ret i32 %68
}
declare i16** @__ctype_b_loc()
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
  br label %15
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @M3(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
